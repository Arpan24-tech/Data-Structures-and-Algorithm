#include<iostream>
#include<vector>
using namespace std;

int LinearSearch(vector<int>&vec,int n)
{
    int found=0;
    int idx=-1;
    for(int i:vec)
    {
        idx++;
        if(i==n)
        {
            found=1;
            break;

        }
    }
    return idx; 
}
int main()
{
    vector<int> vec={1,2,3,4,5,6,7,8,12};
    int idx=LinearSearch(vec,5);
    cout<<idx<<endl;
    return 0;
    
}