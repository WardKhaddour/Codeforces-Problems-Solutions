#include <bits/stdc++.h>

#define ll long long

using namespace std;

bool sortReversed(ll a, ll b){
  return a - b > 0;
}

int main(){
  ll n;
  cin >> n;
  if(n < 3){
    cout << "NO";
    return 0;
  }
  ll v[n], a, b, c;
  for(ll i = 0;i < n; ++i){
    cin >> v[i];
  }
  sort(v, v + n);
  for(int i = 0; i < n - 2; ++i){
    a = v[i];
    b = v[i + 1];
    c = v[i + 2];
    if(a + b > c){
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
