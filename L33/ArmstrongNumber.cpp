//number equal to sum of cubes of its digits
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int original_number=n;
    int sum=0;

    while(n>0)
    {
        int last_digit=n%10;
        sum=sum+pow(last_digit,3);//instead of this we can also use the format(i*i*i) 
        n=n/10;
    }

    if(sum==original_number)
    {
        cout<<"Armstrong Number"<<endl;
    }
    else
    {
        cout<<"Not an Armstrong Number"<<endl;
    }

    return 0;
}