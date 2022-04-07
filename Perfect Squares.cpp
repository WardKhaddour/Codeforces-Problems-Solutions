#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
  int n, maxNum = -99999999;
  cin >> n;
  int a[n];
  for(int i = 0;i < n;++i){
    cin >> a[i];
  }
  for(int i = 0;i < n;++i){
    bool isPerfectSquare = pow((int)sqrt(a[i]),2) == a[i];
    if(a[i] > maxNum && isPerfectSquare){
      a[i] = -99999999;
    }
  }
  for(int i = 0;i < n;++i){
    if(a[i] > maxNum){
      maxNum = a[i];
    }
  }
  cout << maxNum;
  return 0;
}
