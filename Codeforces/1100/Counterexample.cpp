#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  ll l, r;
  cin >> l >> r;
  if(r - l + 1 < 3){
    cout << -1;
    return 0;
  }
  if(l % 2 == 1 && r - l + 1 < 4){
    cout << -1;
    return 0;
  }
  if(l % 2 == 0) cout << l << " " << l + 1 << " " << l + 2;
  else cout << l + 1 << " " << l + 2 << " " << l + 3;
  return 0;
}
