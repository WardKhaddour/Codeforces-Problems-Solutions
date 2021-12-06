#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a, b, c = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        if (b - a >= 2)
            c++;
    }
    cout << c;
    return 0;
}