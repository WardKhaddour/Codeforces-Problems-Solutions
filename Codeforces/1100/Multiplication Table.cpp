#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, x, counter = 0;
  cin >> n >> x;
  for(int i = 1;i <= n;++i){
    if(x % i == 0 && x / i <= n) counter ++;
  }
  cout << counter;
  return 0;
}
