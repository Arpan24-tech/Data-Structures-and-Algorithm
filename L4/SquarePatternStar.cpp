#include<iostream>
using namespace std;
int main()
{
    int i=0,j=0;
    int n;
    cout << "Enter a positive number:";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;

}