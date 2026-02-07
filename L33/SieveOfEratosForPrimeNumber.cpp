//Sieve of Eratosthenes for finding all prime numbers up to a given limit
#include <iostream>
#include <vector>
using namespace std;

int seive_eratothenes(vector<bool> &nums,int n)
{
    int count=0;

    for(int i=2;i<n;i++)
    {
        if(nums[i])
        {
            count++;
        
            for(int j=i*2;j<n;j=j+i)
            {  
                nums[j]=false;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>> n;

    vector<bool> nums(n,true);

    cout<<seive_eratothenes(nums,n)<<endl;
    
    return 0;

}