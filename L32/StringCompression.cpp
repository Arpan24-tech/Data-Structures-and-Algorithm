#include<iostream>
#include<string>
#include<vector>

using namespace std;

int str_compression(vector<string> &arr,int n)
{
    int idx=0;
    for(int i=0;i<n;)
    {
        string ch=arr[i];
        int count=0;
        while((arr[i]==ch) && i<n)
        {
            count++;
            i++;
        }
        if(count==1) arr[idx++]=ch;
        else
        {
            arr[idx++]=ch;
            string str=to_string(count);
            for(char i: str)
            {
                arr[idx++]=i;
            }
        }

    }
    return idx;
}

int main()
{
    vector<string> arr={"a","a","a","b","b","c","c"};
    int n=7;
    
    int idx=str_compression(arr,n);
    arr.resize(idx);

    for(int i=0;i<idx;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}