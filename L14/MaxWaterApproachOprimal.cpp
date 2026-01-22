#include<iostream>
using namespace std;

int maxWater(int arr[],int size)
{
    int lh=0;
    int rh=size-1;
    int maxwater=0;
    while(lh<rh)
    {
        int height=min(arr[lh],arr[rh]);
        int width=rh-lh;
        int area=height*width;
        if(height==arr[lh])
        {
            lh++;
        }
        else if(height==arr[rh])
        {
            rh--;
        }
        maxwater=max(area,maxwater);

    }
    return maxwater;
}

int main()
{
    int height[]={1,8,6,2,5,4,8,3,7};
    int n=sizeof(height)/sizeof(int);
    cout<<maxWater(height,n)<<endl;
}