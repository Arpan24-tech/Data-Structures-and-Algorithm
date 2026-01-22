#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int ans=0;
    int pow=1;
    while (n>0)
    {
        int binary=n%2;
        n=n/2;
        ans+=binary*pow;
        pow*=10;
    }
    cout << ans;

    return 0;
}