#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    while (a > 0 && b > 0)
    {
        a--;
        b--;
        c++;
    }
    cout << c << " " << max(a, b) / 2 << endl;
    return 0;
}