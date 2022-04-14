#include <bits/stdc++.h>

using namespace std;

int main(){
  int x, x2, x3, y1, y, y3, z1, z2, z;
  cin >> x >> x2 >> x3 >> y1 >> y >> y3 >> z1 >> z2 >> z;
  int sum = (x2 + x3 + y1 + y3 + z1 + z2) /2;
  x = sum - x2 -x3;
  y = sum - y1 - y3;
  z = sum - z1 - z2;
  cout << x << " " << x2 << " " << x3 << endl;
  cout << y1<< " " << y << " " << y3 << endl;
  cout << z1 << " " << z2 << " " << z << endl;

  return 0;
}
