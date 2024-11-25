#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    list<int> mylist;
    //push front and push back
    mylist.push_front(1);
    mylist.push_back(2);
    mylist.push_back(3);

    cout<<"after push_front and push_back ";
    for(int val  : mylist)
    {
        cout<<val<<" ";
        cout<<endl;
    }
 //front and back
 cout<<"first ele:"<<mylist.front()<<endl;
 cout<<"last ele:"<<mylist.back()<<endl;
   //pop_front and pop_back
   mylist.pop_front();
   mylist.pop_back();

   cout<<"after pop ele :";
   for(int val2 : mylist)
   {
    cout<<val2<<endl;
    cout<<endl;
   }
   //insert and begin
   auto it = mylist.begin();
   advance(it,1);
   mylist.insert(it,10);

   cout<<"after insert(10) at the 2 position:";
   for(int val:mylist){
    cout<<val<<" ";
    cout<<endl;
   }
//size() and empty()

cout<<"list size: "<<mylist.size()<<endl;
cout<<"is the list empty?"<<(mylist.empty()?"yes":"no")<<endl;

//remove ele
mylist.push_back(2);
mylist.push_back(3);
mylist.push_back(4);

mylist.remove(2);
cout<<"after remove:";
for(int val:mylist)
{
   cout<<val<<" ";
   cout<<endl;
}





}