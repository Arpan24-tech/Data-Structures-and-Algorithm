#include<iostream>
#include<string>

using namespace std;

void removeOccurrences(string &str, string &part) {
    while(str.find(part) != string::npos && str.length()>0 )
    {
        str.erase(str.find(part),part.length());
    }
}
int main()
{
    string str="daabcbaababc";
    string part="abc";
    removeOccurrences(str,part);
    cout<<str<<endl;

}