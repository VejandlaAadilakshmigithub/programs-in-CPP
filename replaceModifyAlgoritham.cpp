#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> num = {3,4,5,3,6,3,7};
    std::replace(num.begin(),num.end(),3,9);

    std::cout<<"After replace el are: ";
    for(int n : num)
    {
        std::cout<<n<<" ";
    }
    std::cout<<std::endl;
    return 0;
}