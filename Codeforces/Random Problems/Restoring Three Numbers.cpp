#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x[4];
    for (int i = 0; i < 4; ++i)
    {
        cin >> x[i];
    }
    sort(x, x + 4);
    int mx = x[3];
    int a = mx - x[0];
    int b = mx - x[1];
    int c = mx - x[2];
    cout << a << " " << b << " " << c << endl;
    return 0;
}