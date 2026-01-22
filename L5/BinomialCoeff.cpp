#include<iostream>
using namespace std;
int fact(int n)
{
int fact=1;
for(int i=1;i<=n;i++)
{
    fact*=i;
}
return fact;
}
int main()
{
    int n,r;
    cout << "Enter value of n :";
    cin >> n;
    cout << "Enter value of r :";
    cin >> r;
    int bt=fact(n)/(fact(r)*fact(n-r));

    cout<<bt<<endl;

}