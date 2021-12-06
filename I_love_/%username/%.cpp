#include <iostream>
using namespace std;
int main()
{
    int n, c = 0, a[1000];
    cin >> n;
    cin >> a[0];
    int mx = a[0];
    int mn = a[0];
    for (int i = 1; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            c++;
            mx = a[i];
        }
        if (a[i] < mn)
        {
            c++;
            mn = a[i];
        }
    }
    cout << c;
    return 0;
}