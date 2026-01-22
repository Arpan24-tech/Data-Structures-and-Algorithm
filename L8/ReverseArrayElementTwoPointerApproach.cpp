#include<iostream>
using namespace std;
int main()
{
    int arr[]={12,43,54,23,13,53,65};
    int start=0;
    int size=sizeof(arr)/sizeof(int);
    int end=size-1;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}