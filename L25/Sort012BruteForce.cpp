#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector <int>vec={2,0,2,1,1,0,1,2,0,0};

    int n=vec.size();

    sort(vec.begin(),vec.end());

    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }

}