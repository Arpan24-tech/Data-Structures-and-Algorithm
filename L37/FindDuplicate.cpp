#include<iostream>
#include<unordered_set>
using namespace std;

int findDuplicate(int arr[],int n)//O(n) time and O(n) space
{
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    {
        if(s.find(arr[i])!=s.end())
        {
            return arr[i];
        }
        s.insert(arr[i]);
    }
    return -1;
}
//approach slow and fast pointer approach used in link_list
//arr element-next node
//arr index- current node
int duplicate_by_hashing(int arr[],int n)//O(n) time and O(1) space
{
    int slow=arr[0];
    int fast=arr[0];
    do
    {
        slow=arr[slow];
        fast=arr[fast];
        fast=arr[fast];
    }
    while(slow!=fast);

    slow=arr[0];
    while(slow!=fast)
    {
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}
int main()
{
    int arr[]={3,1,4,2,2};
    int n=5;
    cout<<findDuplicate(arr,n)<<endl;
    return 0;
}