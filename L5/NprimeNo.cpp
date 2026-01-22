#include<iostream>
using namespace std;

int prime(int n)
{
    int found=0;
    int num=0;
    if(n==1)
    {
        found=1;
    }
    if(n==2)
    {
        found=0;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            found=1;
            break;
        }
    }
    if(found==0)
    {
         num=n;
    }
    return num;
    
}
int main()
{
    int n,x;
    cout<< "Enter the number:";
    cin >> n;
    for(int i=2;i<=n;i++)
    {
    x=prime(i);
     if(x!=0)
    {
        cout << x<<endl;
    }

    }
   

}