#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> vec,int target)
{
    int i=0;
    int n=vec.size();
    int j=n-1;
    vector<int> ans;

    while(i<j)
    {
        int sum=vec[i]+vec[j];
        if(sum<target)
        {
            i++;
        }
        else if(sum>target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    return ans;
}
int main()
{
    vector<int> v={1,4,7,12,18};
    int target=11;
    vector<int> ans=pairSum(v,target);
    for(int i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}