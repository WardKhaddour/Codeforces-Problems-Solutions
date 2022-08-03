#include <iostream>
using namespace std;
int main()
{
    int n, s1 = 0, s2 = 0, s3 = 0;
    cin >> n;
    int t[n], a1[n], a2[n], a3[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> t[i];
        if (t[i] == 1)
        {
            a1[s1] = i;
            s1++;
        }
        else if (t[i] == 2)
        {
            a2[s2] = i;
            s2++;
        }
        else if (t[i] == 3)
        {
            a3[s3] = i;
            s3++;
        }
    }
    int w = min(min(s1, s2), s3);
    cout << w << endl;
    for (int i = 0; i < w; ++i)
    {
        cout << a1[i] + 1 << " " << a2[i] + 1 << " " << a3[i] + 1 << endl;
    }
    return 0;
}