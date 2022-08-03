#include <iostream>
using namespace std;
int main()
{
    int n, k, m = 0;
    cin >> n >> k;
    int a[100];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int b = a[k - 1];
    for (int i = 0; i < n; ++i)
        if (a[i] >= b && a[i] > 0)
            m++;
    cout << m;
    return 0;
}
