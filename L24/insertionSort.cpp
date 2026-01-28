#include<iostream>

using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int previous=i-1;
        while(previous>=0 && arr[previous]>current)
        {
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1]=current;

    }

}


int main()
{
    int arr[]={4,5,2,3,1};
    int size=sizeof(arr)/sizeof(int);

    insertion_sort(arr,size);

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}