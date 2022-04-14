#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  ll n ,t;
  cin >> n >> t;
  if(n == 1 && t == 10){
    cout << -1;
    return 0;
  }
  if(t == 10){
    for(ll i = 0;i < n - 1 ; ++i){
      cout << 1;
    }
    cout << 0;
    return 0;
  }
  for(ll i = 0;i < n ; ++i){
    cout << t;
  }
  return 0;
}
