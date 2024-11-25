/*#include <iostream> 
#include <algorithm> 
#include <vector> 
using namespace std; 
int main()
{ 
vector<int> v ={1,2,3,4,5}; 
int mul=2,div=3; 
for_each(v.begin(),v.end(),[mul,div](int x)

{
    x = x*mul;
    cout<<x/div<<"   ";

}); 
return 0; 
}*/

#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> nam = {3,4,2,1,6,4,8};
int mul = 2,div=3;
    std::for_each(nam.begin(),nam.end(),[mul,div](int x)
    {
        x = x*mul;
        std::cout<<x/div<<std::endl;
    });
    return 0;

}