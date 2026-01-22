#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int i=0;
    int n;

    cout << "Enter the value of n:";
    cin >> n;

    while(i<=n)
    {
        if(i%2==1)
        {
        sum+=i;
        
        }
       i++;
    }
    cout << "Sum of Odd Numbers=" << sum << endl;
    return 0;
}