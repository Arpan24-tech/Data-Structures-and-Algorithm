#include<iostream>
using namespace std;
int main()
{
 int n;
    cout << "Enter the number:\n";
    cin >> n;
    if(n<=0)
    {
        cout << "Enter a positive number\n";
        cin >> n;
    }
    
    if(n==0 && n==1)
    {
        cout << "Factorial=" << 1 <<"\n";
    }
    
    int fact=1;

    for(int i=2; i<=n;i++)
    {
        fact=fact*i;
    }

    cout << "Factorial=" << fact << endl;
    return 0;
}