#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    set<char> vowels= {'a','o','y','e','u','i'};
    for (size_t i = 0; i < s.length(); i++){
        s[i] = tolower(s[i]);
    }
    for(size_t i = 0;i < s.length(); i++){
        if(vowels.find(s[i]) != vowels.end()) continue;
        cout << '.' << s[i];

    }
    return 0;
}
