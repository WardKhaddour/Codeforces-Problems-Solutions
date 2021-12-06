
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    cin >> s;
    int upper = 0, lower = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }
    if (upper == s.length())
    {
        for (int i = 0; i < s.length(); ++i)
        {
            c = tolower(s[i]);
            cout << c;
        }
    }
    else if (islower(s[0]) && upper == s.length() - 1)
    {
        c = toupper(s[0]);
        cout << c;
        for (int i = 1; i < s.length(); ++i)
        {
            c = tolower(s[i]);
            cout << c;
        }
    }
    else
        cout << s;
    return 0;
}