#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    int j;

    cout << "Enter the Number:";
    cin >> n;

    for(i=1; i<=n; i++)
    {
        for(j=1;j<i+1;j++)
        {
            cout << j;
        }
        cout << endl;
    }
}