#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    int c = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.length() - 1; ++i)
    {
        if (a[i] != a[i + 1] && a[i] != '{' && a[i] != '}' && a[i] != ' ' && a[i] != ',')
            c++;
    }
    cout << c;
    return 0;
}