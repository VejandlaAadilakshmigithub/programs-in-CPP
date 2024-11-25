#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<std::string> words = {"apple","banana","mango","ging"};

    auto it = std::find_if(words.begin(),words.end(),[](const std::string& word){
        return word.length()> 5;
    });

    if(it != words.end())
    {
        std::cout<<"First word with more than 5 characters: "<<*it<<std::endl;
    }
    else{
        std::cout<<"No word with more than 5 characters found."<<std::endl;
    }
    return 0;
}