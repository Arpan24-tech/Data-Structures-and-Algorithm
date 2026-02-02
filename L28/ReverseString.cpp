#include<iostream>
#include<string>
#include<algorithm>
#include<string.h>
using namespace std;

void char_arr_reversal(char str[])
{
    int n=strlen(str);
    int s=0;
    int e=n-1;

    while(s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }
}
int main()
{//for reversal of char array we need to write our own function
    char str[]="Hello World";
    char_arr_reversal(str);
    cout<<str<<endl;
//for reversal of string we can use inbuilt function
    string str1="Hello World";
    reverse(str1.begin(),str1.end());
    cout<<str1<<endl;
}