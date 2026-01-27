#include<iostream>
#include<algorithm>
using namespace std;


int painter(int arr[],int n,int m);
bool is_valid(int arr[],int mid,int n,int m);

int main()
{
    int arr[]={40,30,10,20};
    int m=2;
    int n=4;

    cout<<painter(arr,n,m)<<endl;
}


int painter(int arr[],int n,int m)
{
    int end=0;
    int st=INT_MIN;
    int ans=-1;
    for(int i=0;i<n;i++)
    {
        end+=arr[i];
        st=max(st,arr[i]);
    }

    while(st<end)
    {
        int mid=st+(end-st)/2;
        if(is_valid(arr,mid,n,m))
        {
            end=mid-1;
            ans=mid;
        }
        else
        {
            st=mid+1;
        }
    }
    return ans;
}


bool is_valid(int arr[],int mid,int n,int m)
{
    int painter=1;
    int time=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>mid)
        {
            return false;
        }
        if(arr[i]+time<=mid)
        {
            time+=arr[i];
        }
        else
        {
            painter++;
            time=arr[i];
        }
    }
       return painter>m ? false : true ;

}