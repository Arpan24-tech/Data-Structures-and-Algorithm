#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;

    cout << "Enter the Number:";
    cin >> n ;

    for (i=0;i<=n;i++)
    {
        for(j=i+1;j>0;j--)
        {
            cout << i+1;
        }
        cout << endl;
    }
    return 0;
}