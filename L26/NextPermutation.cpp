#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void next_permutation(vector<int>&num)
{
    
    int pivot_idx=-1;
    for(int i=num.size()-2;i>=0;i--)
    {
        if(num[i+1]>num[i])
        {
            pivot_idx=i;
            break;
        }
    }
    if(pivot_idx==-1)
    {

        int m=num.size()-1;
        int n=0;
        while(n<=m)
        {
            swap(num[n],num[m]);
            m--;
            n++;  
        }
        return;
    }
    for(int i=num.size()-1;i>pivot_idx;i--)
    {
        if(num[i]>num[pivot_idx])
        {
            swap(num[i],num[pivot_idx]);
            break;
        }
    }
    int i=pivot_idx+1;
    int j=num.size()-1;

    while(i<=j)
    {
        swap(num[i],num[j]);
        j--;
        i++;
    }

}

int main()
{
    vector <int>vec={1,2,3,5,4};
    
    next_permutation(vec);

    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}