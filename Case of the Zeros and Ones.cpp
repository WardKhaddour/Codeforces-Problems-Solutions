#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n;
  cin >> n;
  vector <char> s;
  for(int i = 0;i < n; ++i){
    char m;
    cin >> m;
    s.push_back(m);
  }
  for(int i = 0;i < n - 1; ++i){
    if((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0')){
      s.erase(s.begin() + i);      s.erase(s.begin() + i);
      i -= 2;
      n -= 2;
    }
  }
  cout << n;
  return 0;
}
