#include<iostream>
#include<vector>

using namespace std;

int allocateBook(vector<int>&arr,int n,int m);
int checkValidity(vector<int> arr,int n,int m,int mid);
int main()
{
    vector<int> arr={2,1,3,4};
    int n=4, m=2;

    cout<<allocateBook(arr,n,m)<<endl;

    return 0;
}

int allocateBook(vector<int>&arr,int n,int m)
{
    int ans=-1;
    int end=0;
    if(m>n)
    {
        return ans;
    }
    for(int i:arr)
    {
        end+=i;
    }

    
    int st=0;
    while(st<end)
    {
        int mid=st+(end-st)/2;

        if(checkValidity(arr,n,m,mid))
        {
            end=mid-1;
            ans=mid;
        }
        else
        {
            st=mid+1;
        }
    }
    return ans;
}

int checkValidity(vector<int> arr,int n,int m,int mid)
{
    int stu=1;
    int page=0;
    for(int i:arr)
    {
        if(i>mid)
        {
            return false;
        }
        if(page+i<=mid)
        {
            page+=i;
        }
        else
        {
            stu++;
            page=i;
        }
    }

    return stu>m ? false : true;

}