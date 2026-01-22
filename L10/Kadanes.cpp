#include<iostream>

using namespace std;

int main()
{
    int arr[]={3,-4,5,4,-1,7,-8};
    int n=sizeof(arr)/sizeof(int);

    int max_sum=INT_MIN;
    int curr_sum=0;

    for(int i=0;i<n;i++)
    {
        curr_sum+=arr[i];
        max_sum=max(max_sum,curr_sum);
        if(curr_sum<0)
        {
            curr_sum=0;
        }
    }
    cout<<max_sum<<endl;
}