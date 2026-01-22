#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec={1,2,3,4,5,6,7};
    cout<<vec.size()<<endl;//Size of vector
    vec.push_back(12);//Add a element at end
    vec.pop_back();//Remve element from end
    cout<<vec.front()<<endl;//Print first number
    cout<<vec.back()<<endl;//Print last element
    cout<<vec.at(0)<<endl;//Same as vec[0]
    //To print all elements of vector
    //here i is not index instead it is the value
    for(int val:vec){
        cout<<val<<endl;
    }
}