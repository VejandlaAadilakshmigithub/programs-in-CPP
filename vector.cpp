#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> v =  {1,2,3};
    cout<<"size = "<<v.size()<< ",capacity = "<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
    v.push_back(5);
    cout<<"size =" <<v.size()<<", capacity ="<<v.capacity()<<endl;
    int cap = v.capacity();
    for(int i = 0;i<10;++i){
        v.push_back(i);
    if(cap!= v.capacity()){
    cap = v.capacity();
    cout<<"capacity ="<<cap<<endl;

    }
    }

cout<< v[12] <<endl;//0
//cout <<v.at(104) <<endl;//error

cout<<"front ="<<v.front() <<", back = "<<v.back() <<endl;
v.insert(v.begin() +2, -10);
cout<< v[2] <<endl;
cout<< "size ="<<v.size()  <<endl;

v.pop_back();
v.erase(v.begin()+1);
cout<<v[0] <<","<<v[1]<<","<<v[2]<<endl;

    return 0;
}