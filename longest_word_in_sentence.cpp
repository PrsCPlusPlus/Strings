#include<iostream>
#include<string>
using namespace std;
int max_len(string s);
int main()
{
    string s;
    cout<<"ENTER A STRING : ";
    getline(cin,s);
    int len = max_len(s);
    cout<<"MAXIMUM LENGTH = "<<len<<endl;
    return 0;
}
int max_len(string s)
{
    int count = 0 , len = 0;
    for(int i = 0 ; s[i] != '\0' ; ++i)
    {
        if(s[i] != ' ')
        {
            ++count;
        }
        else
        {
            len = max(len,count);
            count = 0;
        }
    }
    return max(len,count);
}