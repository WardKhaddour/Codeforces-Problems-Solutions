#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string dir;
    cin >> dir;
    int x [n];
    set <int> ans;
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n - 1; ++i)
    {
        if (dir [i] != dir[i + 1] && dir[i] == 'R')
        {
            ans.insert((x[i + 1] - x[i]) / 2);

        }
    }
    if (ans.empty())
        cout << -1;
    else
        cout << *ans.begin();
    return 0;
}
