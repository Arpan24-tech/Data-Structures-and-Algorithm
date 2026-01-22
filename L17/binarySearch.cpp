//Time Complexity O(log(n))
#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int target);
int main()
{
    int arr[]={-1,0,3,4,5,9,12};
    int n=sizeof(arr)/sizeof(int);
    int target=12;

    cout<<binary_search(arr,n,target)<<endl;

}
int binary_search(int arr[],int size,int target)
    {
        int ll=0;
        int ul=size-1;
        
        while(ll<=ul)
        {
            int mid=ll+(ul-ll)/2; 
            if(target<arr[mid])
            {
                ul=mid-1;
            }
            if(target>arr[mid])
            {
                ll=mid+1;
            }
            if(target==arr[mid])
            {
                return mid;
            }
        }
        return -1;  
    }
