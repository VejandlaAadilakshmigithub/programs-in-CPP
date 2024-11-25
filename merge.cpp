
/*#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i = l;
    int j = m+1;
    int k =0;

      int temp[r - l + 1]; 
    while(i<=m && j<=r)
    {
        if(arr[i] <= arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;

        }
        else
        {
             temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=m)
    {
        
            temp[k]=arr[i];
            i++;
            k++;
    }
    while(j<=r)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int s = 0; s<k; s++)
    {
        arr[l+s]=temp[s];
    }

}

//merge sort function
void mergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);

    }

}


int main()
{
    cout<<"Enter 5 ele: "<<endl;
    int myarr[5];
    for(int i=0;i<5;i++)
    {
        cin>>myarr[i];
    }
    cout<<"before merge sort: "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<myarr[i]<<" ";
    }
//merge sort function

mergeSort(myarr,0,4);


cout<<"After merge sort: \n"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<myarr[i]<<" ";
    }
    cout<<endl;

    return 0;
} */

#include<iostream>
#include<algorithm>
#include<vector>
int main()
{
    std::vector<int> vec1 = {4,3,5,6,2};
    std::vector<int> vec2 = {5,3,9,7,0};

    std::sort(vec1.begin(),vec1.end());
    std::sort(vec2.begin(),vec2.end());

    std::vector<int> result(vec1.size() + vec2.size());

    std::merge(vec1.begin(),vec1.end(),vec2.begin(),vec2.end(),result.begin());

    for(int num : result)
    {
        std::cout<<num<<" ";
    }
    return 0;
}