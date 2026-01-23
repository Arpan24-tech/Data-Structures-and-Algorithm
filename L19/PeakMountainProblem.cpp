#include<iostream>
using namespace std;

int peak(int arr[],int size);

int main()
{
    int arr[]={3,5,7,8,9,6,4,3,0};
    int size=sizeof(arr)/sizeof(int);
    cout<<peak(arr,size)<<endl;
    return 0;
}

int peak(int arr[],int size)
{
    int st=1,end=size-2;

    while(st<=end)
    {
        int mid=st+(end-st)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            return mid;
        }
        if(arr[mid]>arr[mid-1])
        {
            st=mid+1;
        }
        else
        {
        end=mid-1;
        }
    }
    return -1;
}