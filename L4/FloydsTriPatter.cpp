#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    int j;
    int num;

    cout << "Enter the Number:";
    cin >> n;
    num=1;
    for(i=1; i<=n; i++)
    {
        for(j=1;j<i+1;j++)
        {
              cout << num << " ";
              num++;     
        }
        cout << endl;
    }
}