//Time Complexity O(n^2)
#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int arr[]={3,-4,5,4,-1,7,-8};
    
        int max_sum=INT_MIN;

    for(int st=0;st<n;st++)
    {
        int curr_sum=0;
        for(int end=st;end<n;end++)
        {
            curr_sum+=arr[end];
            max_sum=max(max_sum,curr_sum);
        }
    }
    cout<<max_sum<<endl;
}