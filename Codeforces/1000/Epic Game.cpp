#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a , b , n;
    cin >> a >> b >> n;
    while (1){
        n -= __gcd(a, n);
        if(n == 0){
            cout << 0 ;
            break;
        }
        n -= __gcd(b,n);
        if(n == 0){
            cout << 1;
            break;
        }

    }
    return 0;
}
