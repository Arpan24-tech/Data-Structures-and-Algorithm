//matrix of m*n
//Time complexity: O(log(m*n))
#include<iostream>
using namespace std;

bool linear_search(int arr[3][4],int r,int c,int key)
{
    int r_st=0;
    int r_end=r-1;
    while(r_st<=r_end)
    {
        int r_mid=r_st+(r_end-r_st)/2;
        if(arr[r_mid][0]<=key && arr[r_mid][c-1]>=key)
        {
            int st=0;
            int end=c-1;
            while(st<=end)
            {
                int mid=st+(end-st)/2;

                if(arr[r_mid][mid]==key)
                {
                    return true;
                }
                else if(arr[r_mid][mid]<key)
                {
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
                return false;
            }

        }
        else if(arr[r_mid][0]>key)
        {
            r_end=r_mid-1;
        }
        else{
            r_st=r_mid+1;
        }
    }    
    return false;
}


int main()
{
    int arr[3][4]{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int row=3;
    int col=4;
    int key=35;
    cout<<linear_search(arr,row,col,key)<<endl;
    return 0;
}