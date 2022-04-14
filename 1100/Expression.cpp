#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, b, c, exp1, exp2, exp3, exp4, exp5, exp6, max1, max2, max3, max4, max5;
  cin >> a >> b >> c;
  exp1 = a + b * c;
  exp2 = a * (b + c);
  exp3 = a * b * c;
  exp4 = (a + b) * c;
  exp5 = a * b + c;
  exp6 = a + b + c;
  max1 = max(exp1, exp2);
  max2 = max(max1, exp3);
  max3 = max(max2, exp4);
  max4 = max(max3, exp5);
  max5 = max(max4, exp6);
  cout << max5;
  return 0;
}
