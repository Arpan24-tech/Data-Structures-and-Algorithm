#include<iostream>

using namespace std;

int reverse_number(int n)
{
    int new_n=0;
    int factor=10;
    while(n>0)
    {
        int i=n%10;
        n=n/10;
        new_n=new_n*factor+i;
    }
    return new_n;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<reverse_number(n)<<endl;
    return 0;
}