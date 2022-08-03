#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; ++i)
    {
        int mx = a[i];
        for(int j = 0; j < i; ++j)
        {
            if(a[j] > a[i])
            {
                mx = a[j];
                a[j] = a[i];
                a [i] = mx;
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}
