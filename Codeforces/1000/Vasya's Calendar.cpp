#include <iostream>

using namespace std;

int main()
{
    int d, n, counter = 0;
    cin >> d >> n;
    int a[n];
    for (int i = 0;i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0;i < n - 1; ++i){
        //for(int j = 1;j <= a[i]; ++j){
        counter += d - a[i];
        //}
    }
    cout << counter;
    return 0;
}
