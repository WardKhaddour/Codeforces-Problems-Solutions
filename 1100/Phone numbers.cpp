#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    if(n % 2 == 0){
        for(int i = 0;i < n; ++i){
            cout << a[i];
            if(i % 2 == 1 && i != n - 1) cout << '-';
        }
    }
    else{
        for(int i = 0;i < n; ++i){
            if(i % 2 == 0 && i != n - 1) cout << a[i];
            else if(i % 2 == 1 && i != n - 2) cout << a[i] <<  '-';
            else  cout << a[i];
        }
    }
    return 0;
}
