#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> num = {1, 2, 3, 3, 4, 5,2};

    auto it = std::adjacent_find(num.begin(),num.end());
    if(it != num.end()){

    std::cout<<"duplicate first ele is."<<*it<<std::endl;
    }
    else{
              std::cout << "No adjacent duplicates found." << std::endl;
    }
    return 0;
}