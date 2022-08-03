#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, counter = 0;
  cin >> n;
  if(n == 1){
    cout << 0;
    return 0;
  }
  int j = n;
  for(int i = 1; i < n / 2 ; ++i){
    counter += (i + j) % (n + 1);
    counter += (j + i + 1) % (n + 1);
    j--;
  }
  cout << counter + n % 2;
  return 0;
}


// 1 2 3 4 5 6 7 8 9 10
/*
1 -> 10 = 0
10 -> 2 = 1
2 -> 9 = 0
9 -> 3 = 1
3 -> 8 = 0
8 -> 4 = 1
4 -> 7 = 0
7 -> 5 = 1
5 -> 6 = 0
*/
// n + 1 = 11
