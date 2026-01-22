#include<iostream>
using namespace std;
int main()
{
    int n,div=0;
    cout << "Enter the number:\n";
    cin >> n;
    if(n<=0)
    {
        cout << "Enter a positive number\n";
        cin >> n;
    }
    if (n==1)
    {
        cout << "Not Prime" << endl ;
        div=1;
    }

     else if(n==2)
    {
        cout << "Prime" << endl ;
        div=1;
    }
    else
    {
        
    for(int i=2; i*i<=n ; i++)
    {
        if(n%i==0)
        {
            cout << "Not Prime";
            div=1;
            break;
        }
    
    }
    if(div==0)
    {
        cout << "Prime";
    }
    }
    return 0;
}