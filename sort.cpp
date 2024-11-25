#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> num ={3,2,1,5,4,8,7,8};

    std::sort(num.begin(),num.end());

    std::cout<<"sorted ele is:";

    for(int num2 : num)
    {
        std::cout<<num2<<std::endl;
    }
    return 0;
}