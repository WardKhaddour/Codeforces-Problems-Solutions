#include <iostream>
using namespace std;
int main()
{
    int n, k, x, c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        if (x + k <= 5)
            c++;
    }
    cout << c / 3;
    return 0;
}