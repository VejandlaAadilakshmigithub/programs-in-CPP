#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    std::vector<int> num = {1,2,3,4,5};
   std::partition(num.begin(),num.end(),[](int x){return x%2 == 0;});
    std::cout<<"After partitiong(even num first):";
    for(int n : num){
        std::cout<<n <<" "<<std::endl;
    }
    return 0;
}