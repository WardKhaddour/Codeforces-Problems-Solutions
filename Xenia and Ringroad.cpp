#include <iostream>
using namespace std;
int main()
{
    int n, m, x, j = 1;
    cin >> n >> m;
    long long c = 0;
    for (int i = 0; i < m; ++i)
    {
        cin >> x;
        if (x >= j)
            c += x - j;
        else
            c += n - (j - x);
        j = x;
    }
    cout << c;
    return 0;
}