#include <bits/stdc++.h>

using namespace std;

bool canWalk(vector <int> a, int n){
  if(a[0] == 1001 || a[n - 1] == 1001) return false;
  for(int i = 0;i < n ; ++i){
    if(a[i] == 1001 && a[i + 1] == 1001) return false;
  }
  return true;
}

int main(){
  int n, days = 0;
  vector <int> a;
  cin >> n;
  for(int i = 0;i < n;++i){
    int b;
    cin >> b;
    a.push_back(b);
  }
  while(canWalk(a, n)){
    days++;
    for(int i = 0;i < n;++i){
      if(a[i] == days - 1) a[i] = 1001;
    }
  }
  cout << days - 1;
  return 0;
}
