#include <bits\stdc++.h>
using namespace std;
int main()
{
    string a, b, c, d;
    cin >> a >> b >> c;
    d = a + b;
    if (d.length() == c.length())
        sort(d.begin(), d.end());
    sort(c.begin(), c.end());
    if (c == d)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}