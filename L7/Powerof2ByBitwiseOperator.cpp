#include<iostream>
using namespace std;
int main()
{
    int ans=1;
    int numb=128;

    while(ans<numb)
    {
        ans<<=1;
    }
    if(ans==numb)
    {
        cout<<true<<endl;
    }
else
    {
        cout<<false<<endl;
    }
}