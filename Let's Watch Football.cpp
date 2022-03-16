#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, seconds = 0;
    cin >> a >> b >> c;
    int neededData = a * c;
    while(true){
      neededData -= b;
      seconds++;
      if(neededData <= b * c) break;
    }
    cout << seconds;
    return 0;
}
