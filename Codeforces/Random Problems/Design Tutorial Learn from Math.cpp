#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    if (n % 2 == 0)
        m = n - 4;
    else
        m = n - 9;
    cout << m << " " << n - m;
    return 0;
}