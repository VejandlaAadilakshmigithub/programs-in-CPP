#include <iostream>
#include <vector>
int main() {
    // Creating a vector of integers
    std::vector<int> vec;

    // Demonstrating push_back() and size()
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    // Displaying vector size and capacity
    std::cout << "Size of vector: " << vec.size() << std::endl;
    std::cout << "Capacity of vector: " << vec.capacity() << std::endl;

    // Accessing elements using at(), [], and front(), back()
    std::cout << "Element at index 2 (using at()): " << vec.at(2) << std::endl;
    std::cout << "Element at index 2 (using []): " << vec[2] << std::endl;
    std::cout << "Front element: " << vec.front() << std::endl;
    std::cout << "Back element: " << vec.back() << std::endl;

    // Demonstrating max_size()
    std::cout << "Max size of vector: " << vec.max_size() << std::endl;

    // Using insert() to add an element at a specific position
    vec.insert(vec.begin() + 2, 15);
    std::cout << "After insert(15) at index 2: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Using erase() to remove an element
    vec.erase(vec.begin() + 1);  // Removing element at index 1
    std::cout << "After erase() at index 1: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Demonstrating push_back() and pop_back()
    vec.push_back(50);
    vec.push_back(60);
    std::cout << "After push_back(50) and push_back(60): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Using pop_back()
    vec.pop_back();
    std::cout << "After pop_back(): ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Checking if the vector is empty
    std::cout << "Is the vector empty? " << (vec.empty() ? "Yes" : "No") << std::endl;

    // Shrinking the vector's capacity to fit its size
    vec.shrink_to_fit();
    std::cout << "After shrink_to_fit(), capacity: " << vec.capacity() << std::endl;

    // Using begin() to iterate over the vector
    std::cout << "Elements in the vector using begin(): ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
