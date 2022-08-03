#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int c = 0, m = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (c + 5 * i > 240 - k)
            break;
        c += 5 * i;
        m++;
    }
    cout << m;
    return 0;
}