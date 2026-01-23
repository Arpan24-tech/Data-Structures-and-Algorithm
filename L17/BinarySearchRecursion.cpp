#include<iostream>
using namespace std;
int binarySearch(int arr[],int ul,int ll,int target);
int main()
{
     int arr[]={-1,0,3,4,5,9,12};
    int n=sizeof(arr)/sizeof(int);
    int target=12;

    cout<<binarySearch(arr,n-1,0,target)<<endl;

    return 0;
}

int binarySearch(int arr[],int ul,int ll,int target)
{
    int mid=ll+(ul-ll)/2;

    if(target<arr[mid])
    {
        return binarySearch(arr,mid-1,ll,target);
    }
    else if(target>arr[mid])
    {
        return binarySearch(arr,ul,
            mid+1,target);
    }
    else if (target==arr[mid])
    {
        return mid;
    }
    return -1;
}
