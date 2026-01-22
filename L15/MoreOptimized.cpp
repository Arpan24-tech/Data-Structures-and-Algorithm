#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,4};
    int n=4;
    vector<int>ans(n,1);

        for(int i=1;i<n;i++)
    {
        ans[i]=ans[i-1]*vec[i-1];
    }
    int suff=1;
    for(int i=n-2;i>=0;i--)
    {
        suff*=vec[i+1];
        ans[i]*=suff;
    }

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}