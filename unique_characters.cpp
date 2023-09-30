#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool test(string s , int n);
int main()
{
    string s;
    cout<<"ENTER ANY WORD : ";
    getline(cin,s);
    transform(s.begin() , s.end() , s.begin() , ::tolower);
    int l = s.length() - 1;
    bool t = test(s,l);
    if(t == 1)
    {
        cout<<"ALL CHARACTERS ARE UNIQUE";
    }
    else
    {
        cout<<"NOT UNIQUE";
    }
    return 0;
}
bool test(string s , int n)
{
    sort(s.begin() , s.end());
    for(int i = 0 ; i <= n ; ++i)
    {
        if(s[i] == s[i+1])
        {
            return false;
        }
    }
    return true;
}