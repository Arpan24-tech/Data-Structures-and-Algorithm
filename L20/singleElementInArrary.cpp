#include<iostream>
#include<vector>
using namespace std;
int single_element(vector<int>& vec);
int main()
{
    vector <int> arr={1,1,2,2,3,3,4,4,5,6,6,7,7};

    cout<<single_element(arr)<<endl;
}


int single_element(vector<int>&vec)
{
    int st=0;
    int end=vec.size()-1;

    while(st<=end)
    {
        int mid=st+(end-st)/2;

        if(vec[mid-1]!=vec[mid] && vec[mid]!=vec[mid+1])
        {
            return vec[mid];
        }

        if(mid%2==0)
        {
            if(vec[mid-1]==vec[mid])
            {
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }

        }
        else
        {
            if(vec[mid-1]==vec[mid])
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }

            
        }
    }
    return -1;
}