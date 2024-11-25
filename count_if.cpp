#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 2, 2, 3, 4, 5, 6};

    int count = std::count_if(nums.begin(),nums.end(),[](int x){
        return x%2 == 0;;
    });
    std::cout << "There are " << count << " even numbers in the vector." << std::endl;
}