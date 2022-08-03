#include <bits/stdc++.h>

using namespace std;

int main(){
  int whiteCount = 0, blackCount = 0;
  map <char,int> whitePices = {
    {'Q', 9},
    {'R', 5},
    {'B', 3},
    {'N', 3},
    {'P', 1}
  };
  map <char,int> blackPices = {
    {'q', 9},
    {'r', 5},
    {'b', 3},
    {'n', 3},
    {'p', 1}
  };
  char c;
  for(int i = 0;i < 64; ++i){
    cin >> c;
    if(c == '.') continue;
    if(isupper(c)) whiteCount += whitePices[c];
    else blackCount += blackPices[c];
  }
  if(blackCount > whiteCount) cout << "Black";
  else if (whiteCount > blackCount) cout << "White";
  else cout << "Draw";
  return 0;
}
