#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void dutch_algo(vector<int>&arr,int n)
{
    int low=0,mid=0,high=n-1;

    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main()
{
    vector <int>vec={2,0,2,1,1,0,1,2,0,0};

    int n=vec.size();

    dutch_algo(vec,n);

    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }

}