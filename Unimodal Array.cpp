#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  if(n == 1){
    cout << "YES\n";
    return 0;
  }

  //////////////////////////
  int a[n], maxNum, maxNumIndex = 0;
  cin >> a[0];
  maxNum = a[0];
  for(int i = 1;i < n; ++i){
    cin >> a[i];
    if(a[i] > maxNum){
      maxNum = a[i];
      maxNumIndex = i;
    }
  }
  for(int i = 0;i < maxNumIndex;++i){
    if(a[i] >= a[i + 1]){
      cout << "NO\n";
      return 0;
    }
  }
  for(int i = maxNumIndex;i < n - 1;++i){
      if(a[i] == maxNum) continue;
    if(a[i] <= a[i + 1]){
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;

}
