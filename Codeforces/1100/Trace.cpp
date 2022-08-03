#include <bits/stdc++.h>

using namespace std;

const double PI = 3.14159265358979323846;

int main(){
    int n;
    cin >> n;
    set<int>s;
    for(int i = 0;i < n; ++i){
      int m;
      cin >> m;
      s.insert(m);
    }
    long double sum = 0.0;
    int j = 0;
    if(n % 2 == 0) {
      for(auto i:s){
        if(j % 2 == 0) sum -= PI * pow(i,2);
        else sum += PI * pow(i,2);
        j++;
      }
      cout << fixed << setprecision(10) << sum;
      return 0;
    }
    for(auto i:s){
        if(j % 2 == 0) sum += PI * pow(i,2);
        else sum -= PI * pow(i,2);
        j++;
      }
    cout << fixed << setprecision(10) << sum;
    return 0;
}
