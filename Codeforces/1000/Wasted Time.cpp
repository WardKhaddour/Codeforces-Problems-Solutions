#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    double x, y ,x0 ,y0, total = 0.0;
    cin >> x0 >> y0;
    while (--n){
        cin >> x >> y;
        total += sqrt(pow(x-x0,2) + pow(y-y0,2));
        x0 = x;
        y0 = y;
    }
    double ans = total * k / 50;
    printf("%.7f\n", ans);
    return 0;
}
