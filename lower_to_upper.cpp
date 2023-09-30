#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"ENTER ANY STRING : ";
    getline(cin,s);
    for(int i = 0 ; s[i] != '\0' ; ++i)
    {
        s[i] = s[i] - 32;
    }
    cout<<s;
    return 0;
}