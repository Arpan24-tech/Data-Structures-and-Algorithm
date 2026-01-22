#include<iostream>
using namespace std;

int main()
{
    int a=5,b=7;


    //Bitwise &(and)[1 1 0 0]
    //              [1 0 1 0]
    //Result->      [1 0 0 0]

    cout<< (a&b) << endl;
    //Bitwise |(or)[1 1 0 0]
    //             [1 0 1 0]
    //Result->     [1 1 1 0]

    cout<< (a|b) << endl;
    //Bitwise ^(xor)[1 1 0 0]
    //              [1 0 1 0]
    //Result->      [0 1 1 0]
    cout<< (a^b) << endl;
    //Bitwise <<(left shift)(It shift binary number to left)
    cout<< (a<<b) << endl;//[a*2^b](^-normal maths power)
    //Bitwise >>(right shift(It shift binary number to right)
    cout<< (a>>b) << endl;//[a/2^b](^-normal maths power)
}