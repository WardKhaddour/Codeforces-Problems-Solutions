#include <bits\stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    string b = "hello";
    int m = 0, j = 0;
    for (int i = 0; i < a.length(); ++i)
    {
        if (a[i] == b[j])
        {
            m++;
            j++;
            if (m == 5)
                break;
        }
    }
    if (m == 5)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}