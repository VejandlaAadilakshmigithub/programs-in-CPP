//single range
/*#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> num = {1,2,3,4,5};
    std::vector<int> result(num.size());

    std::transform(num.begin(),num.end(),result.begin(),[](int x) { return x*2;});
std::cout<<"After transform ele is: ";
for(int n : result){
    std::cout<<n<<" ";
}
return 0;
  
    }*/
   //two ranges
#include <iostream>
#include <vector>
 #include <algorithm>
 int main() {
 std::vector<int> vec1 = {1, 2, 3, 4, 5};
 std::vector<int> vec2 = {10, 20, 30, 40, 50};
 std::vector<int> result(vec1.size());
 // Transform by adding elements from vec1 and vec2
 std::transform(vec1.begin(), vec1.end(), vec2.begin(), result.begin(), [](int a, int
 b) { return a + b; });
 // Print the resulting vector
 std::cout << "After transformation (addition of vec1 and vec2): ";
 for (int n : result) {
 std::cout << n << " ";
 }
 std::cout << std::endl;
 return 0;
 }