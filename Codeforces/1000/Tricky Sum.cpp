#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        ll ans = n*(n+1)/2;
        for(int i = 1;i <= n; i *= 2){
            ans -= 2*i;
        }
        cout << ans << endl;
    }
    return 0;
}
