#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    cin >> dir;
    string message;
    cin >> message;
    string ans;
    for (int i = 0; i < message.length(); ++i)
    {
        int index = s.find(message[i]);
        if(dir == 'R')
        {
            ans += s[index - 1];
        }
        else
        {
            ans += s[index + 1];
        }
    }
    cout << ans << endl;
    return 0;
}
