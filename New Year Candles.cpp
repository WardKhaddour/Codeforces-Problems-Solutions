#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    c += a;
    while (a >= b)
    {
        c += a / b;
        a = a / b + a % b;
    }
    cout << c;
    return 0;
}