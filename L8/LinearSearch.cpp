#include<iostream>
using namespace std;
int main()
{

int arr[]={12,41,35,56,80,79,14};
int target=70;
int idx=-1;
int found=0;
int arr_size=sizeof(arr)/sizeof(int);

for(int i=0;i<arr_size;i++)
{
if(arr[i]==target)
{
    found=1;
    idx=i;
    break;
}
}
if(found==1)
{
    cout<<"Target="<<target<<endl;
    cout<<"index="<<idx<<endl;
}
if(found==0)
{
    cout<<"Target="<<target<<" Not Found"<<endl;
    cout<<"index="<<idx<<endl;
}
return 0;
}