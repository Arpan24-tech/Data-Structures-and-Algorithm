#include<iostream>
using namespace std;

int changeA(int a)
{
    a++;
    cout<<a<<endl;
    return a;   
}

int changea(int* ptr)
{
    *(ptr)+=1;
    return *ptr;
}

int aliasChangeA(int &a)//here a is the value of variable and not the pointer
{
    a++;
    return a;
}

int main()
{
    int a=5;
    cout<<a<<endl;
    changeA(a);//pass by value(here a copy is passed)
    cout<<a<<endl;
    changea(&a);//pass by reference(here same address is passed)
    cout<<a<<endl;
    aliasChangeA(a);//pass by reference by alias
    cout<<a<<endl;
}