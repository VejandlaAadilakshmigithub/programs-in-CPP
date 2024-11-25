/*#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Sorted vector of integers
    std::vector<int> vec = {1, 3, 5, 7, 9, 11, 13};

    int value_to_find = 7;

    // Perform binary search to check if the value exists
    bool found = std::binary_search(vec.begin(), vec.end(), value_to_find);

    if (found) {
        std::cout << value_to_find << " is present in the vector." << std::endl;
    } else {
        std::cout << value_to_find << " is not present in the vector." << std::endl;
    }

    // Searching for a value that doesn't exist
    value_to_find = 6;
    found = std::binary_search(vec.begin(), vec.end(), value_to_find);

    if (found) {
        std::cout << value_to_find << " is present in the vector." << std::endl;
    } else {
        std::cout << value_to_find << " is not present in the vector." << std::endl;
    }

    return 0;
}
*/
#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<std::string> word = {"aadi","mani","vicky","sandhya"};

    auto search_word = "vicky";

    bool wrd = binary_search(word.begin(),word.end(),search_word);

    if(wrd)
    {
        std::cout<<"word found is :"<<search_word<<std::endl;
    }
    else{
        std::cout<<"word not found is :"<<std::endl;
    }
     search_word = "bye";
      wrd = binary_search(word.begin(),word.end(),search_word);

     if(wrd)
    {
        std::cout<<"word found is :"<<search_word<<std::endl;
    }
    else{
        std::cout<<"word not found is :"<<search_word<<std::endl;
    }

    return 0;
}