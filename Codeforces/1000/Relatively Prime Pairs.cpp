#include <iostream>

#define ll long long

using namespace std;

int main()
{
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    while(l <= r){
        cout << l << " " << l + 1 << endl;
        l += 2;
    }
    return 0;
}
