#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    int j;
    char ch;

    cout << "Enter the Number:";
    cin >> n;
    ch=65;
    for(i=1; i<=n; i++)
    {
        for(j=1;j<i+1;j++)
        {
              cout << ch << " ";
              ch++;
                 
        }
        cout << endl;
    }
}