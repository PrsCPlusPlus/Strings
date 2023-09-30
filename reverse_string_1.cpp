#include <bits/stdc++.h>
using namespace std;
void reverse(string &str, int i = 0)
{
    int n = str.length();
    if (i == n / 2)
        return;
    swap(str[i], str[n - i - 1]);
    reverse(str, i + 1);
}
int main()
{
    string str ;
    cin>>str;
    reverse(str);
    cout << str;
    return 0;
}

