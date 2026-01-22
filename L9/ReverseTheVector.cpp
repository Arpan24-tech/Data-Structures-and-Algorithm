#include<iostream>
#include<vector>

using namespace std;

vector<int> reverse(vector<int> & vec)
{
    int start=0;
    int end=vec.size()-1;
    while(start<end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    return vec;
}

int main()
{
    vector<int> vec={1,2,3,4,5};
    for(int i:vec)
    {
        cout<<i<<" ";
    }
    reverse(vec);
    cout <<endl;
    for(int i:vec)
    {
        cout<<i<<" ";
    }
}