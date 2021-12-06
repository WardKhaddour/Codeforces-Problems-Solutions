#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        char c = tolower(s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y')
            continue;
        else
            cout << '.' << c;
    }
    return 0;
}