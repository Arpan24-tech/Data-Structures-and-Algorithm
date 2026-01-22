#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec={1,2,3,4,1,2,3};
    int ans=0;

    for(int i:vec)
    {
        ans^=i;
    }
    cout<<ans<<endl;
}
//property
//n^n=0
//n^0=n