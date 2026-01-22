#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int> vec)
{
    int n=vec.size();
    int freq=0;
    int ans=vec[0];
    for(int i=0;i<n;i++)
    {
        if(freq==0)
        {
            ans=vec[i];
        }
        if(ans==vec[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec={1,2,3,4,1,2,1,2,2,2,};

    cout<<majority(vec)<<endl;
}