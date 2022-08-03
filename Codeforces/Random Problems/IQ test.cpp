#include <iostream>
using namespace std;
int main()
{
    int n, index, even = 0, odd = 0, a[10000];
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 1)
            odd++;
        else
            even++;
    }
    if (odd > even)
    {
        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 0)
                index = i;
        }
    }
    else if (odd < even)
    {
        for (int i = 0; i < n; ++i)
        {
            if (a[i] % 2 == 1)
                index = i;
        }
    }
    cout << index + 1;
    return 0;
}