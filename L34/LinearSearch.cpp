#include<iostream>
using namespace std;

int linear_search(int arr[3][3],int row, int col, int key){
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};//initialization of 2D array
    int row=3;
    int col=3;
    int key;
    cout<<"ENTER THE ELEMENT TO BE SEARCHED: "<<endl;
    cin>>key;
    if(linear_search(arr,row,col,key))
    {
        cout<<"ELEMENT FOUND"<<endl;
    }
    else
    {
        cout<<"ELEMENT NOT FOUND"<<endl;
    }
    return 0;
}