// 2 sum problem
//approach 1: brute force approach
// time complexity: O(n^2)
// space complexity: O(1)
// approach 2: slightly optimized approach
// time complexity: O(nlogn) due to sorting
// space complexity: O(1) if we sort the array in place, otherwise O(n) if we use extra space for sorting
// approach 3: using hash map
// time complexity: O(n) on average, O(n^2) in worst case due to hash collisions
// space complexity: O(n) due to hash map storage
#include<iostream>
#include<algorithm>
#include<vector> 
#include<unordered_map>

using namespace std;

pair<int,int> brute_force(int arr[],int size,int target)
{
    pair<int,int> ans;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(target==arr[i]+arr[j])
            {
                ans.first=i;
                ans.second=j;
            }
        }
    }
    return ans;
}

pair<int,int> two_pointer(vector<int> arr,int size,int target)
{
    sort(arr.begin(),arr.end());
    pair<int,int>ans;
    int first=0;
    int last=arr.size()-1;

    while(first<last)
    {
        if(arr[first]+arr[last]==target)
        {
            ans.first=first;
            ans.second=last;
            break;
        }
        else if(arr[first]+arr[last]>target){
            last--;
        }
        else
        {
            first++;
        }
    }
    return ans;//here the index will change due to sorting
}
pair<int,int> using_hashing(int arr[],int size,int target)
{
    unordered_map<int,int> data;
    pair<int,int> ans;
    for(int i=0;i<size;i++)
    {
        int first=arr[i];
        int second=target-arr[i];
        if(data.find(second)!=data.end())
        {
            ans.first=i;
            ans.second=data[second];
        }
        else{
            data[first]=i;
        }
    }
    return ans;
}

int main()
{
    int arr[]={5,2,11,7,15};
    int target=9;
    pair<int,int> ans=brute_force(arr,5,target);
    cout<<ans.first<<" "<<ans.second<<endl;

    vector<int> vec={5,2,11,7,15};
    pair<int,int> a=two_pointer(vec,5,target);
    cout<<a.first<<" "<<a.second<<endl;

    pair<int,int> answer=using_hashing(arr,5,target);
    cout<<answer.first<<" "<<answer.second<<endl;
    return 0;
}
