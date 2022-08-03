#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, hello = "hello";
    cin >> s;
    int m = 0;
    for(int i = 0;i < s.length(); ++i){
        if(s[i] == hello[m]){
            m++;
        }
        if(m == 5) break;
    }
    m == 5? cout << "YES"  : cout <<"NO";
    return 0;
}
