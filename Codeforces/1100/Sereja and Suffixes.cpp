#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  int dist [100001] = {0};
  vector <int> nums;
  map <int, bool> isOccuredNums;
  cin >> n >> m;
  for(int i = 0;i < n;++i){
    int num;
    cin >> num;
    nums.push_back(num);
  }
  for(int i = n - 1;i >= 0; --i){
    if(!isOccuredNums[nums[i]]){
      dist[i]++;
      isOccuredNums[nums[i]] = true;
    }
    dist[i] += dist[i + 1];
  }
  for(int i = n - 1;i >= 0; --i){
  }
  while(m--){
    int index;
    cin >> index;
    cout << dist[index - 1] << endl;
  }
  return 0;
}
