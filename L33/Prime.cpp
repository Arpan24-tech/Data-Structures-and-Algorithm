#include<iostream>
using namespace std;
//llogic of prime number-> loop till sqrt(n) and check for factors
int main()
{
    int n;
    cin>>n;
    int flag=0;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<"Non Prime"<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"Prime"<<endl;
    }


    return 0;
}
