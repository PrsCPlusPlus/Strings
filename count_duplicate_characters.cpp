#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int count_duplicate(string s , int n);
int main()
{
    string s;
    cout<<"ENTER ANY STRING : ";
    getline(cin,s);
    int len = s.length() - 1;
    int c = count_duplicate(s,len);
    cout<<"NUMBER OF DUPLICATE CHARACTERS ARE = "<<c<<endl;
    return 0;
}
int count_duplicate(string s , int n)
{
    sort(s.begin() , s.end());
    int count = 0;
    for(int i = 0 ; i <= n ; ++i)
    {
        if(s[i] == s[i + 1])
        {
            count++;
        }
    }
    return count;
}