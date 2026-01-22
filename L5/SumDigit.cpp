#include<iostream>
using namespace std;

 int digitSum(int n)
    {
        int sum=0;
        int i;
        while (n>0)
        {
            i=n%10;
            n=n/10;
            sum+=i;
        }
        return sum;
        
        
        
    }

int main()
{
    int n;
    
    cout << "Enter the Number:";
    cin >> n;
    cout << digitSum(n);
}

   
