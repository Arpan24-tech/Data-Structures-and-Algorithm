#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Number:";
    cin >> n;

    int i,j;

    for(int i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout <<"*";
        }
        for(j=0;j<2*n-2*i-2;j++)
        {
            cout << " ";
        }
        for(j=i+1;j>0;j--)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=n-i;j>0;j--)
        {
            cout << "*";
        }
        for(j=0;j<2*i;j++)
        {
            cout << " ";
        }
        for(j=n-i;j>0;j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}