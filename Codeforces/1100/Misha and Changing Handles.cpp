#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  vector <string> oldHandles, newHandles;
  for(int i = 0;i < n;++i){
    string oldHandle, newHandle;
    cin >> oldHandle >> newHandle;
    auto it = find(newHandles.begin(), newHandles.end(), oldHandle);
    if(it != newHandles.end()){
      *it = newHandle;
    }
    else{
      oldHandles.push_back(oldHandle);
      newHandles.push_back(newHandle);
    }
  }
  cout << oldHandles.size() << endl;
  for(int i = 0;i < oldHandles.size();++i){
    cout << oldHandles[i] << " " << newHandles[i] << endl;
  }
  return 0;
}
