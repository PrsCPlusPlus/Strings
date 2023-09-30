#include<iostream>
#include<string>
/*
    PRN : 22070123087
    Aim : To find and print the longest word in a string
*/
using namespace std;
void longest_word(string s , int *max_index , int *max_len);
int main()
{
    string s;
    cout<<"ENTER A STRING : ";
    getline(cin,s);
    int max_index = 0 , max_len = 0;
    longest_word(s,&max_index,&max_len);
    cout<<"THE LENGTH OF THE LONGEST WORD IS : "<<max_len<<endl;
    cout<<"THE WORD IS : ";
    for(int i = max_index ; i < (max_len+max_index) ; ++i)
    {
        cout<<s[i];
    }
    return 0;
}
void longest_word(string s , int *max_index , int *max_len)
{
    int i = 0;
    int len = 0 , index = 0 ;
    while(1)
    {
        if(s[i] == ' ' || s[i] == '\0')
        {
            if(len > *max_len)
            {
                *max_len = len;
                *max_index = index;
            }
            len = 0;
            index = i + 1;
        }
        else
        {
            len++;
        }
        if(s[i] == '\0')
        {
            break;
        }
        ++i;
    }
}
/*
OUTPUT : 
PS D:\C++\strings> ./index_of_longest_word
ENTER A STRING : This pencil is good
THE MAXIMUM LENGTH IS 6
pencil
PS D:\C++\strings>
*/