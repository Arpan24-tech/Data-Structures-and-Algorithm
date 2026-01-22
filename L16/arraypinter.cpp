#include<iostream>
using namespace std;
int main()
{
    int a[4]={1,2,3,4};

    int *ptr=a;//array pointer is a constant value
    
    cout<<a<<endl;//array pointer of first element
    
    cout<<ptr<<endl;//array pointer of first element
    cout<<*ptr<<endl;//value of first element
    
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
    ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    

    return 0;
}
