#include<iostream>
using namespace std;
int main()
{
    int arr1[]={5,6,7,12,3,4};
    int arr2[]={4,5,12,2,1,31};
    int size1=sizeof(arr1)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    for(int i=0;i<size1;i++)
    {
        for(int j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                cout<<arr1[i]<<" ";
            }
        }
    }
}