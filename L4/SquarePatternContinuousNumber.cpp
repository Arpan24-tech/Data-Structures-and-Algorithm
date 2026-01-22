#include<iostream>
using namespace std;
int main()
{
    int i=1,j=1;
    int n;
    int p=0;
    cout << "Enter a positive number:";
    cin >> n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            p=p+1;
            cout << p  << " ";
        }
        
        cout << endl;
    }
    return 0;

}