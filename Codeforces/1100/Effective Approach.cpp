#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n, m, vasyaCounter = 0, petyaCounter = 0;
  cin >> n;
  map <ll, ll> elements;
  for(ll i = 0;i < n; ++i){
    ll b;
    cin >> b;
    elements[b] = i;
  }
  cin >> m;
  for(ll i = 0;i < m; ++i){
    ll b;
    cin >> b;
    vasyaCounter += elements[b] + 1;
    petyaCounter += n - elements[b];
  }
  cout << vasyaCounter << " " << petyaCounter << endl;
  return 0;
}
