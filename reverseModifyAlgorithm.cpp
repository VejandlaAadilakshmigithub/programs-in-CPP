#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    std::vector<int> num = {1,2,3,4,5};

    std::reverse(num.begin(),num.end());
    std::cout<<"reverse ele is: ";
    for(int n:num)
    {
        std::cout<<n<<std::endl;
    }
    return 0;
}