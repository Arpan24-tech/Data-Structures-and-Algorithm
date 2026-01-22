#include<iostream>
using namespace std;

int main()
{
int n;
int last_num=1;
int sum=0;
int present_num=0;

cout<<"Enter the number:";
cin>> n;
    for(int i=0;i<=n;i++)
    {
        cout<< present_num<<" ";
        sum=present_num+last_num;
        last_num=present_num;
        present_num=sum;
       
    }
}