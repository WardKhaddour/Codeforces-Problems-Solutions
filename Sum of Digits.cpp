#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string n;
    int counter = 0;
    cin >> n;
    int len = n.length();
    while(len > 1){
        int sum = 0;
        for(int i = 0;i < len;++i){
            sum += n[i] - '0';
        }
        n = to_string(sum);
        cout << n;
        len = n.length();
        counter++;

    }
    cout << counter;

    return 0;
}
