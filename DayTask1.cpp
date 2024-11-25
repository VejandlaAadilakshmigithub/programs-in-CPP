/* You need to create a generic container class that can store elements and handle various operations. You will also need to specialize this container for specific types (e.g., std::unique_ptr and std::shared_ptr), use smart pointers, and handle conversion between std::unique_ptr and std::shared_ptr.
Requirements:
Create a template-based container class (GenericContainer). 
The container should store a collection of objects of any type.
The container should provide basic operations like add, get, and size.
Specialize the container for std::unique_ptr and std::shared_ptr: 
For std::unique_ptr, the container should provide a method to release ownership of an element.
For std::shared_ptr, the container should manage shared ownership and ensure proper reference counting.
Use smart pointers to manage the memory of the elements inside the container.
Demonstrate usage of auto, range-based for loops, lambdas, constexpr, tuples, and strongly-typed enums where appropriate.*/


#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <tuple>
#include <type_traits>
#include <cassert>


enum class PointerType { Unique, Shared };


template<typename T>
class GenericContainer {
public:
    void add(T element) {
        elements.push_back(std::move(element));
    }

    T& get(size_t index) {
        assert(index < elements.size());
        return elements[index];
    }

    size_t size() const {
        return elements.size();
    }

   
    void display() const {
        for (const auto& elem : elements) {
            std::cout << *elem << " ";
        }
        std::cout << "\n";
    }

protected:
    std::vector<T> elements;
};


template<typename T>
class GenericContainer<std::unique_ptr<T>> {
public:
    void add(std::unique_ptr<T> element) {
        elements.push_back(std::move(element));
    }

    std::unique_ptr<T> release(size_t index) {
        assert(index < elements.size());
        auto ptr = std::move(elements[index]);
        elements.erase(elements.begin() + index);
        return ptr;
    }

    std::unique_ptr<T>& get(size_t index) {
        assert(index < elements.size());
        return elements[index];
    }

    size_t size() const {
        return elements.size();
    }

    
    void display() const {
        for (const auto& elem : elements) {
            std::cout << *elem << " ";
        }
        std::cout << "\n";
    }

protected:
    std::vector<std::unique_ptr<T>> elements;
};


template<typename T>
class GenericContainer<std::shared_ptr<T>> {
public:
    void add(std::shared_ptr<T> element) {
        elements.push_back(element);
    }

    std::shared_ptr<T> get(size_t index) {
        assert(index < elements.size());
        return elements[index];
    }

    size_t size() const {
        return elements.size();
    }

   
    void display() const {
        for (const auto& elem : elements) {
            std::cout << *elem << " ";
        }
        std::cout << "\n";
    }

protected:
    std::vector<std::shared_ptr<T>> elements;
};


class TestClass {
public:
    TestClass(int value) : value(value) {}
    int getValue() const { return value; }

private:
    int value;
};


template<typename T>
void displayContainer(const GenericContainer<std::shared_ptr<T>>& container) {
    container.display();
}


int main() {
    
    GenericContainer<std::unique_ptr<TestClass>> uniqueContainer;
    uniqueContainer.add(std::make_unique<TestClass>(10));
    uniqueContainer.add(std::make_unique<TestClass>(20));

    uniqueContainer.display();

   
    auto releasedPtr = uniqueContainer.release(0);
    std::cout << "Released: " << releasedPtr->getValue() << "\n";
    uniqueContainer.display();

  
    GenericContainer<std::shared_ptr<TestClass>> sharedContainer;
    sharedContainer.add(std::make_shared<TestClass>(30));
    sharedContainer.add(std::make_shared<TestClass>(40));

    sharedContainer.display();

  
    auto ptr = sharedContainer.get(0);
    std::cout << "First shared_ptr value: " << ptr->getValue() << "\n";

   
    std::cout << "Range-based for loop: ";
    for (const auto& elem : sharedContainer) {
        std::cout << elem->getValue() << " ";
    }
    std::cout << "\n";

    
    auto printValues = [](const auto& container) {
        for (const auto& elem : container) {
            std::cout << elem->getValue() << " ";
        }
        std::cout << "\n";
    };

    printValues(sharedContainer);

    return 0;
}
