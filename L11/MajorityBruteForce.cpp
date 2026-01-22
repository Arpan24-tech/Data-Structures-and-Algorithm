//Time Complexity O(n^2)
#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int> vec)
{
    int n=vec.size();
    for(int val:vec)
    {
        int freq=0;
        for(int j:vec)
        {
            if(val==j)
            {
                freq++;
            }
        }
    if(freq>n/2)
    {
        return val;
        break;
    }
    }
    return -1;
}
int main()
{
    vector<int> vec={1,1,2,3,2,2,2,2};
    
    cout<<majority(vec)<<endl;
}