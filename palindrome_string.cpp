#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
string rev(string s);
int main()
{
    string s1;
    cout<<"ENTER ANY STRING : ";
    getline(cin,s1);
    string s2 = rev(s1);
    cout<<endl<<s2<<endl;
    if(s1.compare(s2) == 0)
    {
        cout<<"PALINDROME";
    }
    else
    {
        cout<<"NOT PALINDROME";
    }
    return 0;
}
string rev(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        swap(s[i], s[s.length() - i - 1]);
    }
    return s;
}