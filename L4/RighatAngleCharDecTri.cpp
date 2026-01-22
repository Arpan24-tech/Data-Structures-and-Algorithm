#include<iostream>
using namespace std;

int main()
{
    int i;
    int n;
    int j;
    char ch='A';
    int idx;
    cout << "Enter the Number:";
    cin >> n;
    ch=65;
    for(i=0;i<n;i++)
    {   
        idx=i;
        for(j=0;j<i+1;j++)
        {
             ch=ch+idx;
        
            cout << ch;
            ch=65;
            idx--;
        }      
         cout << endl;
    }
   return 0;
}