//remove_if
#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> num = {1,2,3,4,5};

    auto new_end = std::remove_if(num.begin(),num.end(),[](int x){return x%2 == 0;});

    num.erase(new_end,num.end());
std::cout<<"reverse ele:";
for(int n: num)
{
    std::cout<<n<<" ";
}
std::cout<<std::endl;
return 0;
}