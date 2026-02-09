#include<iostream>

using namespace std;
void elements(int arr[4][4],int row,int column)
{
    int r_st=0;
    int c_st=0;
    int r_end=row-1;
    int c_end=column-1;

    while(r_st<=r_end && c_st<=c_end)
    {
        //top
        for(int i=c_st;i<=c_end;i++)
        {
            cout<<arr[r_st][i]<<" ";
        }
        
        //right
        for(int i=r_st+1;i<=r_end;i++)
        {
            cout<<arr[i][c_end]<<" ";
        }

        //bottom
        if(c_st==c_end) break;
        for(int i=c_end-1;i>=c_st;i--)
        {
            cout<<arr[r_end][i]<<" ";
        }

        //left
        if(r_st==r_end) break;
        for(int i=r_end-1;i>r_st;i--)
        {
            cout<<arr[i][c_st]<<" ";
        }
        
        r_st++;
        r_end--;
        c_st++;
        c_end--;

    }
}
int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    elements(arr,4,4);
}