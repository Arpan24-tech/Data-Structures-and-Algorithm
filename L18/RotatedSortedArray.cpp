#include<iostream>
using namespace std;

int Binary_search(int arr[],int target,int size);
int main()
{
    int arr[]={7,8,9,0,1,2,3,4,5,6};
    int target=3;
    int n=sizeof(arr)/sizeof(int);
    cout<<Binary_search(arr,target,n)<<endl;
}

int Binary_search(int arr[],int target,int size)
{
    int st=0;
    int end=size-1;

    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(target==arr[mid])
        {
            return mid;
        }
        //check left sorted
        if(arr[st]<=arr[mid])
        {
            if(arr[st]<=target && target<=arr[mid])
            {
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        else
        {
            if(arr[mid]<=target && target<=arr[end])
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
    return -1;
}