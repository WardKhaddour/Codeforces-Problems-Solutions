#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100], b[100];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        b[a[i]] = i + 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << b[i] << " ";
    }
    return 0;
}