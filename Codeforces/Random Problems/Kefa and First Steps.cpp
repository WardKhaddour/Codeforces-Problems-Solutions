#include <iostream>
using namespace std;
int main()
{
    int c = 1, n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int mx = 1;
    for (int i = 1; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] >= a[i - 1])
        {
            c++;
            mx = max(c, mx);
        }
        else
            c = 1;
    }
    cout << mx;
    return 0;
}