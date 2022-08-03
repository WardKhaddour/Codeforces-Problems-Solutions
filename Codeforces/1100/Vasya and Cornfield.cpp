#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, d, m;
  cin >> n >> d >> m;
  while(m--){
    int x, y;
    cin >> x >> y;
    if((y <= -1 * x + 2 * n - d) &&
        (y >= -1 * x + d) &&
        (y <= x + d) &&
        (y >= x - d)) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}

