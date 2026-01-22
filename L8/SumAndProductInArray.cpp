#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,12,32,4,56,7,8};
    int sum=0;
    int product=1;

    for(int i=0;i<7;i++)
    {
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<sum<<endl<<product<<endl;
}
