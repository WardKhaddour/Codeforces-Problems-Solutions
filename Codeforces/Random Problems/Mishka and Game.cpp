#include <iostream>
using namespace std;
int main()
{
    int n, m, c, wm = 0, wc = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> m >> c;
        if (m > c)
            wm++;
        else if (c > m)
            wc++;
    }
    if (wm > wc)
        cout << "Mishka" << endl;
    else if (wc > wm)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;
    return 0;
}