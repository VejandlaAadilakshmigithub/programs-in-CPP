#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> num = {2,1,3,2,4,5,6,4,7,4};

    auto num1 = std::count(num.begin(),num.end(),4);

    std::cout<<"ele found in "<<num1 <<" times."<<std::endl;
    return 0;
}