#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, c = 0;
    int x[1000], y[1000];
    cin >> s >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            if (x[i] > x[j])
            {
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (s > x[i])
        {
            s += y[i];
            c++;
        }
        else
            break;
    }
    if (c == n)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}