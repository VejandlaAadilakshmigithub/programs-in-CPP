/*#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    std::vector<int> vec1 = {3,2,6,7,8,4,9};

    auto min = std::min_element(vec1.begin(),vec1.end());

    if(min != vec1.end())
    {
        std::cout<<"min ele is: "<<min<<" ";
        }
        else{
            std::cout<<"list is empty."<<" ";
        }
        std::cout<<std::endl;
        return 0;
}*/

#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    std::vector<int> vec1 = {5,6,4,3,7,8,9};

    auto minEle = min_element(vec1.begin(),vec1.end());

    if(minEle != vec1.end())
    {
        std::cout<<"min ele is: "<<*minEle<<std::endl;
    }
    else{
        std::cout<<"list is empty."<<std::endl;
    }
    return 0;
}