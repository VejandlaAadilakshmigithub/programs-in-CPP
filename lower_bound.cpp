/*#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> words = {"apple", "banana", "cherry", "date", "fig", "grape"};

    std::string search_word = "date";
    auto it = std::lower_bound(words.begin(), words.end(), search_word);

    if (it != words.end()) {
        std::cout << "Lower bound for " << search_word << " is: " << *it << std::endl;
    } else {
        std::cout << search_word << " is larger than any word in the vector." << std::endl;
    }

    return 0;
}*/
#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<std::string> word = {"aadi","lamxi","mani","bharagavi","chandu"};

    auto search_word = "laxmi";

    auto it = std::lower_bound(word.begin(),word.end(),search_word);

    if(it != word.end())
    {
        std::cout<<"word found :"<< *it <<std::endl;
    }
    else{
        std::cout<<"word not found.";
    }
    return 0;
}