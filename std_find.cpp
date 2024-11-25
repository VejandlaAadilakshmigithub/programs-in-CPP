/*#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<std::string> num = {"aadi","laxmi","mani","divya"};

    auto it = std::find(num.begin(),num.end(),"divya");

    if(it!=num.end())
    {
        std::cout<<"Element found at : "<<std::distance(num.begin(),it)<<std::endl; 
    }
    else{
        std::cout<<"ele not found."<<std::endl;
    }
return 0;
}*/
#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    std::vector<std::string> name ={"adi","money","vicky","mani"};

    auto it = std::find(name.begin(),name.end(),"mani");

    if(it != name.end())
    {
           std::cout<<"ele found at: "<<std::distance(name.begin(),it);
    }
    else{
        std::cout<<"Ele not found."<<std::endl;
    }
    return 0;
}