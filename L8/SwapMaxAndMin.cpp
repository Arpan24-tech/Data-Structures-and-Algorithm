#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements of array:";
    cin >> n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    int max_idx;
    int min_idx;


    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            max_idx=i;
        }
       if(min>arr[i])
       {
        min=arr[i];
        min_idx=i;
       }
    }
    swap(arr[max_idx],arr[min_idx]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout << min<<endl;
    cout<<max<<endl;
}