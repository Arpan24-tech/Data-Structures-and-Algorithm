#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,4};
    int n=4;
    vector<int>ans(n,1);
    vector<int>pref(n,1);
    vector<int>suff(n,1);
    

    for(int i=1;i<n;i++)
    {
        pref[i]=pref[i-1]*vec[i-1];
    }
    for(int i=n-2;i>=0;i--)
    {
        suff[i]=suff[i+1]*vec[i+1];
    }

    for(int i=0;i<n;i++)
    {
        ans[i]=pref[i]*suff[i];
    }

    for(int i=0;i<n;i++)
    {
     cout << ans[i] << " ";
    }
    return 0;
}