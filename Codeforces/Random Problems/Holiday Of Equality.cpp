#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int mx = a[n - 1];
    for (int i = 0; i < n; ++i)
    {
        s += mx - a[i];
    }
    cout << s;
    return 0;
}