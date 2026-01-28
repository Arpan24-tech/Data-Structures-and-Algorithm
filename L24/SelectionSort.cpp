#include<iostream>

using namespace std;

void selection_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int smallest_element_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallest_element_idx])
            {
                smallest_element_idx=j;
            }
        }
        swap(arr[i],arr[smallest_element_idx]);
    }
}


int main()
{
    int arr[]={4,5,2,3,1};
    int size=sizeof(arr)/sizeof(int);

    selection_sort(arr,size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}