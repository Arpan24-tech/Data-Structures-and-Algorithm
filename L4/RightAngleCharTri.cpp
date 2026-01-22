#include<iostream>
using namespace std;
int main()
{
    int n,i,j;

    cout << "Enter the Number:";
    cin >> n;

    char ch='A';
    

    for(i=1;i<=n;i++)
    {
        for(j=1;j<i+1;j++)
        {
            cout << ch;
        }
        cout << endl;
        ch+=1;
    }
    return 0;

}