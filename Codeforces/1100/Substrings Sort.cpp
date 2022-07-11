#include <bits/stdc++.h>

using namespace std;

bool sortByLength(string a, string b){
  return a.length() < b.length();
}

int main(){
  int n;
  bool isReordered = true;
  cin >> n;
  vector <string> strings;
  for(int i = 0;i < n; ++i){
    string in;
    cin >> in;
    strings.push_back(in);
  }
  sort(strings.begin(), strings.end(), sortByLength);
  for(int i = 1; i < n;++i){
    if(strings[i].find(strings[i - 1]) == string::npos){
      isReordered = false;
      break;
    }
  }
  if(!isReordered){
    cout << "NO\n";
    return 0;
  }
  cout << "YES\n";
  for(auto i : strings){
    cout << i << endl;
  }
  return 0;
}
