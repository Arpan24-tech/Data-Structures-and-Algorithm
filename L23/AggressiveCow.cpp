//We are taking sorted array only
#include<iostream>
#include<algorithm>

using namespace std;

int cow(int arr[],int numb_of_lane, int cows);
bool is_valid(int arr[],int n,int c,int mid);
int main()
{
    int arr[]={1,2,4,8,9};
    int n=5;
    int c=3;

    cout<<cow(arr,n,c)<<endl;
    return 0;
}

int cow(int arr[],int numb_of_lane, int cows)
{
    int st=1;
    int max_value=INT_MIN;
    int min_value=INT_MAX;
    for(int i=0;i<numb_of_lane;i++)
    {
        max_value=max(max_value,arr[i]);
        min_value=min(min_value,arr[i]);
    }
    int end=max_value-min_value;
    int ans=-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;

        if(is_valid(arr,numb_of_lane,cows,mid))
        {
            ans=mid;
            st=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}

bool is_valid(int arr[],int n,int c,int mid)
{
    int cow=1;
    int lastStallPos=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]-lastStallPos>=mid)
        {
            cow++;
            lastStallPos=arr[i];
        }
        if(cow==c)
        {
            return true;
        }
    }
    return false;

}