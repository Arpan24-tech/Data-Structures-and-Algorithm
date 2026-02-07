#include <iostream>
using namespace std;
int gcdBrute(int a,int b)
{
    if(a==0 || b==0) return max(a,b);
    int res=1;
    for(int i=1;i<=min(a,b);i++)
    {   
        if(a%i==0 && b%i==0)
        {
            res=i;
        }
    }
    return res;
}

int gcdEuclidean(int a,int b)
{
    while(a>0 && b>0)
    {
        if(a>b)
        {
            a%=b;
        }
        else{
            b%=a;
        }
    }
    if(a==0) return b;
    else return a;
}

//lcm=(a*b)/gcd(a,b)

int lcm(int a,int b)
{
    return (a*b)/gcdEuclidean(a,b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"GCD using Brute Force: "<<gcdBrute(a,b)<<endl;
    cout<<"GCD using Euclidean Algorithm: "<<gcdEuclidean(a,b)<<endl;
    cout<<"LCM: "<<lcm(a,b)<<endl;
    return 0;

}