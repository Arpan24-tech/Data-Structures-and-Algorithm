#include<iostream>
#include<string>
#include<cctype>//for alphanumeric functions
using namespace std;

bool is_alphanumeric(char c)//can use isalnum() to check alphanumeric
{
    if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9'))
        return true;
    return false;
}
bool is_palindrome(const string &s)
{
    int left = 0;
    int right = s.length() - 1;

    
    while(left < right)
    {
        if(!is_alphanumeric(s[left]))
        {
            left++;
            continue;
        }
        if(!is_alphanumeric(s[right]))
        {
            right--;
            continue;
        }
        if(tolower(s[left]) != tolower(s[right]))
            return false;
        left++;
        right--;
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    if(is_palindrome(s))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}