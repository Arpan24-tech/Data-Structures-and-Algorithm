#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,4,5,6,7,1,2,3,7};
    int size=sizeof(arr)/sizeof(int);
    int found=0;
    for(int i=0;i<size;i++)
    {
        found=0;
        for(int j=0;j<size;j++)
        {
            if(i==j)
          {
            continue;
          }
          if(arr[i]==arr[j])
          
          {
            found=1;
            break;
          }
        
        }
         if(found==0)
          {
            cout<<arr[i]<<endl;
          }
    }
}