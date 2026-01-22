#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=10;
    
    int* ptr1=&a;
    int* ptr2=&b;

    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    cout<<ptr1-ptr2<<endl;//total number of integer blocks
    
    cout<<(ptr2<ptr1)<<endl;//can perform operation like->(>,<,>=,<=,==,!=)

    ptr1++;
    cout<<ptr1<<endl;//increase in memory of ptr1 by 4


}