#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> a;
  for(int i = 0;i < n;++i){
    int x;
    cin >> x;
    a.push_back(x);
  }


  for(int i = 0; i < n; ++i){
    for(int j = 0;j < n; ++j){
      if(j == i) continue;
      for(int k = 0;k < n; ++k){
        if(k == j) continue;
        if(a[i] == a[k] + a[j]) {
          cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
          return 0;
        }
      }
    }
  }


  cout << -1 << endl;
  return 0;
}
