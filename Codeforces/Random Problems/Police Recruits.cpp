#include <iostream>
using namespace std;
int main()
{
    int n, c = 0, m = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        if (x > 0)
            c += x;
        else
        {
            if (c < 1)
                ++m;
            else
                --c;
        }
    }
    cout << m;
    return 0;
}