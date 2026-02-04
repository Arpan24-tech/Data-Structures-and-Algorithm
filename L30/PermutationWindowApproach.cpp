//to check if a permutation lies in a given string(taking only lowercase letters)
#include<iostream>
#include<string>

using namespace std;

bool permutatiom(string & str, string & perm)
{
    int freq[26]={0};
    for(int i=0;i<perm.length();i++)
    {
        freq[perm[i]-'a']++;
    }
    int window_size=perm.length();
    for(int i=0;i<str.length();i++)
    {
        int window_idx=0,idx=i;
        int temp_freq[26]={0};
        while(window_idx<window_size && idx<str.length())
        {
            temp_freq[str[idx]-'a']++;
            window_idx++;
            idx++;
        }
        bool is_equal=true;
        for(int j=0;j<26;j++)
        {
            if(freq[j]!=temp_freq[j])
            {
                is_equal=false;
                break;
            }
        }
        if(is_equal)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s="eibaoooo";
    string p="ab";
    cout<<permutatiom(s,p)<<endl;

}