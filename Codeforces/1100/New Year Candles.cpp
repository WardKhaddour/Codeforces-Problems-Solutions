#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  int counter = a;
  while(a >= b){
    int mod = a % b;
    a /= b;
    counter += a;
    a += mod;
  }
  cout << counter;
  return 0;
}
