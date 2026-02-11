#include<iostream>
#include<unordered_set>

using namespace std;

pair<int,int> value(int arr[][3],int row,int column,int n)
{
    unordered_set<int>s;
    int a,b;
    int exp_sum=0;
    int actual_sum=0;
    pair<int,int> ans;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            actual_sum+=arr[i][j];
            if(s.find(arr[i][j])!=s.end())
            {
                a=arr[i][j];
                ans.first=a;
            }
            s.insert(arr[i][j]);
        }
    }
    exp_sum=(n*n)*(n*n+1)/2;
    b=exp_sum+a-actual_sum;
    ans.second=b;

    return ans;
}
int main()
{
    int arr[3][3]={{9,1,7},{8,9,2},{3,4,6}};
    int row=3;
    int column=3;
    int n=3;

    pair<int,int>ans=value(arr,row,column,n);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;

}