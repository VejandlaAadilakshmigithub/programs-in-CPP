/*#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    p = &a;
    a = 10;
    *p = 12;
    int b = 20;
    *p = b;
    cout<<p<<endl;
    cout<<*p<<endl;
     cout<<&a<<endl;
      cout<<*p<<endl;

    return 0;
}

//pointer types
#include<iostream>
using namespace std;
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    cout<<sizeof(int)<<endl;
    char *po;
    po = (char*)p;//type casting
    cout<<"size of char: "<<sizeof(char);
    cout<<*po<<" "<<po<<endl;
    return 0;


}

//void poimter
#include<iostream>
using namespace std;
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    cout<<sizeof(int)<<endl;
    void *po;
    po = p;
    cout<<po<<endl;
    return 0;
}
  
  //pointer to pointer
  #include<iostream>
using namespace std;
int main()
{
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;
    cout<<*p<<endl;
    cout<<*r<<endl;
    cout<<**q<<endl;
    return 0;
}
 */
//pointer as function
#include<iostream>
using namespace std;

void increment(int a){
    a = a+1;
}
int main()
{
    int a;
    a = 10;
    increment(a);
    cout<<a<<endl;
    return 0;
}



