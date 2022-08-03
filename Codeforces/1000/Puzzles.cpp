#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, mn;
    cin >> n >> m;
    int a[m];
    for(int i = 0;i < m;++i){
        cin >> a[i];
    }
    sort(a, a + m);
    mn = a[n-1] - a[0];
    for(int i = 1;i <= m - n; ++i){
        if(a[n + i - 1] - a[i] < mn){
            mn = a[n + i - 1] - a[i];
        }
    }
    cout << mn;
}
