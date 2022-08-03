#include <iostream>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;
    int c = 0;

    while ((c * k) % 10 != r)
    {
        c++;
        if (c * k % 10 == 0)
            break;
    }
    cout << c;
    return 0;
}