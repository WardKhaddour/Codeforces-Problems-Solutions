#include <iostream>
using namespace std;
int main()
{
    int a, b, c, m1, m2, m3, m4, m5, m6, m, mm, mmm, M;
    cin >> a >> b >> c;
    m1 = a + b + c;
    m2 = a * b * c;
    m3 = a + b * c;
    m4 = a * b + c;
    m5 = a * (b + c);
    m6 = (a + b) * c;
    m = max(m1, m2);
    mm = max(m3, m4);
    mmm = max(m5, m6);
    M = max(m, mm);
    cout << max(M, mmm);
    return 0;
}