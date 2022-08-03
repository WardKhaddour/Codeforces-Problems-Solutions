#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, zeroCounter = 0, fiveCounter = 0;
  cin >> n;
  for(int i = 0;i < n; ++i){
    int b;
    cin >> b;
    if(b == 0) zeroCounter ++;
    else fiveCounter ++;
  }
  if(zeroCounter != 0 && fiveCounter < 9){
    cout << 0 << endl;
    return 0;
  }
  if(zeroCounter == 0){
    cout << -1 << endl;
    return 0;
  }
  for(int i = 0;i < fiveCounter / 9; ++i){
    cout << 555555555;
  }
  for(int i = 0;i < zeroCounter; ++i){
    cout << 0;
  }
  return 0;
}
