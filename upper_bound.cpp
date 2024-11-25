#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<std::string> word = {"aadi","lamxi","mani","bharagavi","chandu","nandu","zss"};

    auto search_word = "mani";

    auto it = std::upper_bound(word.begin(),word.end(),search_word);

    if(it != word.end())
    {
        std::cout<<"word found :"<< *it <<std::endl;
    }
    else{
        std::cout<<"word not found.";
    }
    return 0;
}