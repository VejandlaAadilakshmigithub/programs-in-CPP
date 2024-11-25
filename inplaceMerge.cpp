#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
  std::vector<int> vec1 = {4,5,6,7,8,1,7,9};

  std::cout<<"Before merging values: ";
  for(int num : vec1)
  {
    std::cout<<num <<" ";
  }

  std::sort(vec1.begin(),vec1.begin()+4);
  std::sort(vec1.begin()+4,vec1.end());

  auto first = vec1.begin();
  auto second = vec1.begin()+4;
  auto third = vec1.end();

  std::cout<<"After merging:";

  std::inplace_merge(first,second,third);

  for(int num2 : vec1)
  {
        std::cout<<num2<<" ";
  }
  std::cout<<std::endl;
  return 0;



}