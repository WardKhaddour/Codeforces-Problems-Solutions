#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int days = 0;
    while (n--){
        days ++;
        if (days % m == 0){
            n ++;
        }
    }
    cout << days << endl;
    return 0;
}
