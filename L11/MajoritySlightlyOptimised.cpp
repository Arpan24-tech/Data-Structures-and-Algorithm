//Time Complexity O(nloh(n))
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int majority(vector<int> vec)
{
    int n=vec.size();

    sort(vec.begin(),vec.end());
    
    int freq=0,ans=vec[0];
    for(int i=0;i<n;i++)
    {
        if(vec[i]==vec[i-1])
        {
            freq++;
        }
        else
        {
            freq=1;
             ans=vec[i];
        }
        if(freq>n/2)
        {
            return ans;
        }
    }
    return ans;
}
int main()
{
    vector<int> vec={7,5,6,4,3,2,1,3,21,1,6,1,1,1,1,1,1,1,1};
    
    cout<<majority(vec)<<endl;
}