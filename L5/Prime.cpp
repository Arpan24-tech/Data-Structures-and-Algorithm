#include<iostream>
using namespace std;

void prime(int n)
{
    int found=0;
    if(n==1)
    {
        cout << "Not prime";
        found=1;
    }
    if(n==2)
    {
        cout << "Prime";
        found=1;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout << "Not Prime";
            found=1;
            break;
        }
    }
    if(found==0)
    {
        cout<< "Prime";
    }
    
}
int main()
{
    int n;
    cout<< "Enter the number:";
    cin >> n;
    prime(n);
    return 0;
}