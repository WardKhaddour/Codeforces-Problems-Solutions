
#include <bits/stdc++.h>
using namespace std;

int a[501][501];
int n, m, q, x, y, ans, cur;

int main()
{
    cin >> n >> m >> q;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

    while (q--)
    {
        cin >> x >> y;
        x--;
        y--;
        ans = 0;

        a[x][y] = 1 - a[x][y];
        for (int i = 0; i < n; ++i)
        {
            cur = 0;
            for (int j = 0; j < m; ++j)
            {
                if (a[i][j])
                    cur++;
                else
                    cur = 0;
                ans = max(ans, cur);
            }
        }
        cout << ans << endl;
    }
    return 0;
}