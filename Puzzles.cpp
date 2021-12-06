#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, c;
    cin >> n >> m;
    int a[1000];
    for (int i = 0; i < m; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + m);
    c = a[n - 1] - a[0];
    for (int i = 1; i <= m - n; ++i)
    {
        if (a[n + i - 1] - a[i] < c)
            c = a[n + i - 1] - a[i];
    }
    cout << c;
    return 0;
}