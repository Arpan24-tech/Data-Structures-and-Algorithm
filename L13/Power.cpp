#include<iostream>
using namespace std;
//n(decimal number)=>[og2(n)+1] total number of digits in binary form
double pow(double x,int n)
{
    if(n<0)
    {
        x=1/x;
        n=-n;
    }
    double ans=1;
    while(n>0)
    {
        if(n%2==1)
        {
            ans=ans*x;
        }
    x*=x;
    n/=2;
    }
    return ans;
}

int main()
{
    double x=2;
    int n=-3; 
    cout<<pow(x,n)<<endl;
    return 0;
}