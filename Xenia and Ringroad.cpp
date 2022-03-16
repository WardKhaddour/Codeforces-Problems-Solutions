#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, m ,seconds;
  cin >> n >> m;
  long long a[m];

  for(int i = 0;i < m; ++i){
    cin >> a[i];
  }
  seconds = a[0] - 1;
  for(int i = 1;i < m;++i){
    if(a[i] >= a[i - 1]) seconds += a[i] - a[i - 1];
    else seconds += n - a[i - 1] + a[i];
  }
  cout << seconds;
  return 0;
}
