#include<bits/stdc++.h>
using namespace std;
int len(string s);
int main()
{
    string s1 , s2;
    cout<<"ENTER THE FIRST STRING : ";
    getline(cin,s1);
    cout<<"ENTER THE SECOND STRING : ";
    getline(cin,s2);
    string s3 = s1 + s2;
    cout<<s3;
    cout<<endl<<"LENGTH = "<<len(s3);
    return 0;
}
int len(string s)
{
    int count = 0;
    for(int i = 0 ; s[i] != '\0' ; ++i)
    {
        count++;
    }
    return count;
}