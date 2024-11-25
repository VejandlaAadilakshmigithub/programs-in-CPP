#include<iostream>
#include<algorithm>
#include<vector>
//#include<iterator>
int main()
{
    std::vector<int> num1 = {3,4,5,6,7};

    std::vector<int> num2 = {4,5,7,8,9};

    std::sort(num1.begin(),num1.end());
    std::sort(num2.begin(),num2.end());

    std::vector<int> result;

    std::set_intersection(num1.begin(),num1.end(),num2.begin(),num2.end(),std::back_inserter(result));

    std::cout<<"After intersection ele: "<<" ";
    for(int num3 : result)
    {
        std::cout<<num3<<" ";
    }
    std::cout<<std::endl;
    return 0;


}