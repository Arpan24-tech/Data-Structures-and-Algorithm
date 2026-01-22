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

    int sum=0;

    for(int i=0; i<=n; i++)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }
    }
    cout << "Sum=" << sum << endl;
}