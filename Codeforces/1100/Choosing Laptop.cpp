#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, price = 1001, index;
    cin >> n;
    int laptops[n][4];
    for (int i = 0;i < n ;++i){
      cin >> laptops[i][0] >> laptops[i][1] >> laptops[i][2] >> laptops[i][3];
    }
    for(int i = 0;i < n; ++i){
      for (int j = 0;j < n;++j){
        if(laptops[i][0] > laptops[j][0]
           && laptops[i][1] > laptops[j][1]
           && laptops[i][2] > laptops[j][2]){
                laptops[j][0] = -10;
                laptops[j][1] = -10;
                laptops[j][2] = -10;
                laptops[j][3] = -10;
           }
      }
    }
    for (int i = 0; i < n; i++) {
        if (laptops[i][3] < price && laptops[i][3] > 0) {
            index = i + 1;
            price = laptops[i][3];
        }
    }
    cout << index;
    return 0;
}
