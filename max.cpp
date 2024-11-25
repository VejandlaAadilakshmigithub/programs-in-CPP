/*#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> num1 = {3,4,2,6,7,8,9};

    auto max_ele = std::max_element(num1.begin(),num1.end());

    if(max_ele != num1.end())
    {
        std::cout<<"max ele is: "<<*max_ele<<std::endl;
    }
    else{
        std::cout<<"list is emty."<<std::endl;
    }
}
#include <iostream>
#include <vector>
#include <algorithm>  // For std::max_element

int main() {
    std::vector<int> numbers = {10, 20, 5, 30, 15};

    // Custom comparison function to find the "largest" element in reverse order
    auto max_it = std::max_element(numbers.begin(), numbers.end(), [](int a, int b) {
        return a < b;  // Reverse comparison: 'a' is considered larger than 'b'
    });

    // Dereference the iterator to print the largest element according to custom comparison
    if (max_it != numbers.end()) {
        std::cout << "The largest element (in reverse order) is: " << *max_it << std::endl;
    } else {
        std::cout << "The container is empty." << std::endl;
    }

    return 0;
}
*/
#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> vec1 = {5,4,6,7,9,3,4};

    auto maxEle = max_element(vec1.begin(),vec1.end(),[](int a,int b){
        return a<b;});

        if(maxEle != vec1.end())
        {
            std::cout<<"max ele is."<<*maxEle<<std::endl;
        }
        else{
            std::cout<<"list is empty."<<std::endl;
        }
        return 0;
}