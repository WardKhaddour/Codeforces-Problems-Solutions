#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n * n];
    int mx = 1;
    for (int i = 0; i < n; ++i)
    {
        a[i] = 1;
    }
    for (int i = n; i < n * n; ++i)
    {
        if (i % n == 0)
            a[i] = 1;
        else
        {
            a[i] = a[i - n] + a[i - 1];
            if (a[i] > mx)
                mx = a[i];
        }
    }
    cout << mx;
    return 0;
}
