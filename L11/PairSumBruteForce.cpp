//Time complexity (n^2)
//Pair sum in a "sorted array" with target sum return index
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[]={2,5,7,12,15};
    int target=27;
    int n=sizeof(arr)/sizeof(int);
    vector<int> ans;

    for(int i=0;i<n;i++)
    {

        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    for(int i: ans)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}