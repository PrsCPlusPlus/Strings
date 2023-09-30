#include<iostream>
#include<string>
using namespace std;
/*
    PRN : 22070123087
    Aim : Occurence of a substring in a main string
*/
void indexOfSub(string str , string s);
int main()
{   string s , substr;
    cout<<"ENTER THE MAIN STRING : ";
    getline(cin,s);
    cout<<"ENTER THE SUB STRING : ";
    getline(cin,substr);
    indexOfSub(s,substr);
    return 0;
}
void indexOfSub(string str , string s)
{
    int k , j , i;
    int l = s.length();
    int o = 0;
    int A[100];
    for(i = 0 ; str[i] != '\0' ; ++i)
    {
        k = i;
        for(j = 0 ; j <= l-1 ; ++j)
        {
            if(str[k] != s[j])
            {
                break;
            }
            ++k;
        }
        if(j == l)
        {
            A[o] = i;
            ++o;
        }
    }
    if(o != 0)
    {
        cout<<"THE SUBSTRING OCCURED "<<o<<" TIMES AT INDICES"<<endl;
        for(int p = 0 ; p < o ; ++p)
        {
            cout<<A[p]<<" ";
        }
    }
    else
    {
        cout<<"NOT FOUND"<<endl;
    }
}