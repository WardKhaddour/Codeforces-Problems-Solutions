#include <iostream>
using namespace std;
int main()
{
    int x = 0, n;
    cin >> n;
    char a[4];
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        for (int i = 0; i < 2; ++i)
        {
            if (a[i] == '+' && a[i + 1] == '+')
                x++;
            else if (a[i] == '-' && a[i + 1] == '-')
                x--;
        }
    }
    cout << x;
    return 0;
}