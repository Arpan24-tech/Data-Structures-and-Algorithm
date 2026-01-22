#include<iostream>
using namespace std;
//loop method
bool power2(int n)
{
    int x=0;
    int i=2;
    bool ans=false;
      while(x<n)
      {
        x=i;
        i=i*2;

      }
      if(x==n)
      {
        ans=true;
      }
    return ans;
}
int main()
{
    int n;

    cout << "Enter a number:";
    cin >> n;
    
    cout << power2(n) << endl;

}