#include <iostream>
using namespace std;
int main()
{
    long long n, m;
    cin >> n >> m;
    if (m <= (n + 1) / 2)
        cout << m * 2 - 1;
    else
        cout << (m - (n + 1) / 2) * 2;
    return 0;
}