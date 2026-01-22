#include<iostream>
using namespace std;

int main()
{
    int n;

    cout <<"Enter a Number:";
    cin >> n;
    int reverse=0;
    int i=1;
    int num;
    while(n>0)
    {
        num=n%10;
        reverse=reverse*i+num;
        n=n/10;
        i=10;
    }
    cout << reverse << endl;
}