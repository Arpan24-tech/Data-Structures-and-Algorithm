#include<iostream>
using namespace std;

bool linear_search(int arr[5][5],int r,int c,int key)
{
    int r_st=0;
    int r_end=c-1;
    while(r_st<r && r_end>=0)
    {
        int mid=arr[r_st][r_end];
        if(mid==key)
        {
            return true;
        }
        else if(mid<key)
        {
            r_st++;
        }
        else{
            r_end--;
        }
        
    }
    return false;
}
int main()
{
    int arr[5][5]={{1,4,7,11,15},
                   {2,5,8,12,19},
                   {3,6,9,16,22},
                   {10,13,14,17,24},
                   {18,21,23,26,30}};
    int row=5;
    int col=5;
    int key=5;

    cout<<linear_search(arr,row,col,key)<<endl;
    return 0;
}