#include <bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  for(int i = 0;i < s.length();){
    if(s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B'){
      cout << " ";
      i += 3;
      continue;
    }
    cout << s[i];
    i++;
  }
  return 0;
}
