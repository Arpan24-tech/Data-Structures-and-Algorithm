#include<iostream>
using namespace std;

int maxWater(int arr[],int size)
{
    int maxwater=0;
    
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            int width=j-i;
            int height=min(arr[i],arr[j]);
            int area=height*width;
            maxwater=max(area,maxwater);
        }
    }
    return maxwater;
}
int main()
{
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(height)/sizeof(int);
    cout<<maxWater(height,n)<<endl;
}