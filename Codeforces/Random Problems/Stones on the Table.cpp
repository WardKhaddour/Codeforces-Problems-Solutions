#include <iostream>
using namespace std;
int main()
{
    int n, d = 0;
    cin >> n;
    char a[100];
    cin >> a;
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] == a[i + 1])
            d++;
    }
    cout << d;
    return 0;
}
