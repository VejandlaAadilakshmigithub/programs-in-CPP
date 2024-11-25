#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}
};

int main() {
    // Create a vector of Person objects
    std::vector<Person> people = {
        Person("John", 30),
        Person("Alice", 25),
        Person("Bob", 30),
        Person("Diana", 25),
        Person("Charlie", 28)
    };

    // Output the original vector
    std::cout << "Original list of people:" << std::endl;
    for (const auto& person : people) {
        std::cout << person.name << " (" << person.age << ")" << std::endl;
    }

    // Use stable_sort to sort by age (ascending order)
    std::stable_sort(people.begin(), people.end(), [](const Person& a, const Person& b) {
        return a.age < b.age;  // Sort by age
    });

    // Output the sorted vector
    std::cout << "\nSorted list of people by age (stable):" << std::endl;
    for (const auto& person : people) {
        std::cout << person.name << " (" << person.age << ")" << std::endl;
    }

    return 0;
}
