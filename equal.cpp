#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec1 = {1, 2, 3, 4};
    std::vector<int> vec2 = {1, 2, 3,4};
    
    // Check if vec1 and vec2 are equal
    if (std::equal(vec1.begin(), vec1.end(), vec2.begin())) {
        std::cout << "The two vectors are equal." << std::endl;
    } else {
        std::cout << "The two vectors are not equal." << std::endl;
    }
    
    return 0;
}