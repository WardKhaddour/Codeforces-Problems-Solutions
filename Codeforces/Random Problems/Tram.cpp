#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    int c = 0, still = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        still -= a;
        still += b;
        c = max(c, still);
    }
    cout << c;
    return 0;
}