#include <iostream>
using namespace std;
int main()
{
    int n, m = 0;
    cin >> n;
    int a[10000][3], b[10000] = {};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cin >> a[i][j];
            b[i] += a[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
        if (b[i] > 1)
            m++;
    cout << m;
    return 0;
}