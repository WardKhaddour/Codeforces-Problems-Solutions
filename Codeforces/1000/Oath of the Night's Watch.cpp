#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int mn = a[0];
    int mx = a[0];
    for (int i = 1;i < n ;++i){
        cin >> a[i];
        if (a[i] < mn){
            mn = a[i];
        }
        if(a[i] > mx){
            mx = a[i];
        }
    }
    int counter = 0;
    for(int i = 0;i < n; ++i){
        if(a[i] > mn && a[i] < mx){
            counter ++;
        }
    }
    cout << counter;
    return 0;
}
