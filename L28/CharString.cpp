#include<iostream>
#include<string.h>

using namespace std;

int main()
{
     //inisialisation 
    //1st
    char str1[]={'a','b','c','\0'};
    cout<<str1<<endl;

    //2nd
    char str2[6];
    cin>>str2;
    cout<<str2<<endl;

    //3rd
    char str3[]="Hello";
    cout<<str3<<endl;

    //to find length of string
    cout<<strlen(str1)<<endl;

    //to take sentences
     char str4[10];
    cin.getline(str4,10);
    cout<<str4<<endl;

    for(char ch:str4)
    {
        cout<<ch<<" ";
    }
    char str5[100];
    cin.getline(str5,100,'$');//1st is name of variable 2nd is length of string third is the character after which input taking will stop
     for(char ch:str5)
    {
        if(ch=='\0') break;
        cout<<ch<<" ";
    }

    //TO FIND LENGHT OF STRING
    int len=0;
    for(int i=0; str5[i]!='\0'; i++)
    {
        len++;
    }
    cout<<len<<endl;

}