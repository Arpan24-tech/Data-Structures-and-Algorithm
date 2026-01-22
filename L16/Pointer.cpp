#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int* ptr=&a;
    int** ptr2=&ptr;

    cout<<&a<<endl;//address of a
    cout<<ptr<<endl;//address of a
    cout<<ptr2<<endl;//address of ptr
    cout<<*ptr<<endl;//value of a
    cout<<**ptr2<<endl;//value of a
    cout<<*ptr2<<endl;//value of ptr
    return 0;
}