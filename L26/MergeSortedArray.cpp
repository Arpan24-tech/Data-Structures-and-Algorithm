#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void merge_sort_array(vector<int>&A,vector<int>&B,int m,int n)
{
    int i=m-1;
    int j=n-1;
    int idx=m+n-1;
    while(j>=0 && i>=0)
    {
        if(A[i]>B[j])
        {
            A[idx]=A[i];
            idx--;
            i--;
        }
        else if(A[i]<B[j])
        {
            A[idx]=B[j];
            j--;
            idx--;
        }
        else
        {
            A[idx]=A[i];
            i--;
            idx--;
        }
    }
     while(j>=0)
        {
            A[idx]=B[j];
            idx--;
            j--;
            
        }
}
int main()
{
    vector<int> A={4,5,6,0,0,0};
    int m=3;
    vector<int> B={1,2,3};
    int n=3;

    merge_sort_array(A,B,m,n);

    for(int i=0;i<m+n;i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}