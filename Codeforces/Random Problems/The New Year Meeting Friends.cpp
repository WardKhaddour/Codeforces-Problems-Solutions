#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min(min(a, b), c);
    int mx = max(max(a, b), c);
    cout << mx - mn;
    return 0;
}