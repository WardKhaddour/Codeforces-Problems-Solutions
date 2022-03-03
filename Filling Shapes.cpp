#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;
    if(n % 2 == 1){
        cout << 0 << endl;
        return 0;
    }
    ll res = pow(2,n/2);
    cout << res;
    return 0;
}
