#include<iostream>
using namespace std;

int main(){
    cout<<"ENTER THE NUMBER OF ROWS AND COLUMNS: "<<endl;
    int row,col;
    cin>>row>>col;
    int arr[row][col];
    cout<<"ENTER THE ELEMENTS OF THE ARRAY: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"THE ELEMENTS OF THE ARRAY ARE: "<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}