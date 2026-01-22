#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(3);
    cout<<vec.capacity()<<endl;
    vec.push_back(7);
    cout<<vec.capacity()<<endl;
    vec.push_back(5);
    cout<<vec.capacity()<<endl;
    for(int i:vec)
    {
        cout<<i<<" ";
    }
}