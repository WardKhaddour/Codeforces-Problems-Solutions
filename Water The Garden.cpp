#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k, seconds = 1;
    cin >> n >> k;
    set <int> watered;
    set <int> wateredNext;
    for(int i = 0;i < k; ++i){
      int x;
      cin >> x;
      watered.insert(x);
    }
    while(watered.size() != n){
      for(auto i : watered){
        if(i < n) wateredNext.insert(i + 1);
        if(i > 1) wateredNext.insert(i - 1);
      }

      for(auto i : wateredNext){
        watered.insert(i);
      }
      seconds++;
    }
    cout << seconds << endl;
  }
  return 0;
}
