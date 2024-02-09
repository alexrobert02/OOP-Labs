#include <iostream>
#include "Vector.h"

// Example usage
int main() {
    MyVector<int> vec;

    vec.push(3);
    vec.push(1);
    vec.push(5);
    vec.push(2);

    std::cout << "Initial vector: ";
    for (size_t i = 0; i < vec.count(); ++i) {
        std::cout << vec.get(i) << " ";
    }
    std::cout << std::endl;

    vec.sort();
    std::cout << "Sorted vector: ";
    for (size_t i = 0; i < vec.count(); ++i) {
        std::cout << vec.get(i) << " ";
    }
    std::cout << std::endl;

    vec.remove(1); // Remove element at index 1
    std::cout << "Vector after removing element at index 1: ";
    for (size_t i = 0; i < vec.count(); ++i) {
        std::cout << vec.get(i) << " ";
    }
    std::cout << std::endl;

    vec.insert(1, 10); // Insert 10 at index 1
    std::cout << "Vector after inserting 10 at index 1: ";
    for (size_t i = 0; i < vec.count(); ++i) {
        std::cout << vec.get(i) << " ";
    }
    std::cout << std::endl;

    std::cout << "Element at index 2: " << vec.get(2) << std::endl;

    vec.set(2, 20); // Set element at index 2 to 20
    std::cout << "Vector after setting element at index 2 to 20: ";
    for (size_t i = 0; i < vec.count(); ++i) {
        std::cout << vec.get(i) << " ";
    }
    std::cout << std::endl;

    std::cout << "Number of elements in the vector: " << vec.count() << std::endl;

    std::cout << "Index of element 5: " << vec.firstIndexOf(5) << std::endl;

    return 0;
}
