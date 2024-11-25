#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
int main()
{

    std::vector<int> num1 = {2,1,4,1,6};

    std::vector<int> num2 = {6,1,2,9,4};

    std::sort(num1.begin(),num1.end());

    std::sort(num2.begin(),num2.end());

    std::vector<int> result;

    std::set_union(num1.begin(),num1.end(),num2.begin(),num2.end(),std::back_inserter(result));

    std::cout<<"union values is: "<<" ";
    for(int num : result)
    {
        std::cout<<num<<std::endl;

    }
    return 0;



}
