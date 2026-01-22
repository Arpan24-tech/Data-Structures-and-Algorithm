#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;

    int ans=0;
    int pow=1;
    int deci;
    while(n>0)
    {    
        deci=n%10;
        n=n/10;
        ans+=deci*pow;
        pow=pow*2;
    }
    cout << ans << endl;
    return 0;
}