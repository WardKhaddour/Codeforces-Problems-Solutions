#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0;i < n;++i){
        for(int j = 0;j < n;++j){
            cin >> a[i][j];
        }
    }
    int ans = 0;
        vector <int> v;
    for (int i = 0;i < n;++i){
        int c = 0;
        for (int j = 0;j < n;++j){
            if(a[i][j] == 0 || a[i][j] == 2){
                c++;
            }
        }
        if(c == n - 1){
            ans ++;
            v.push_back(i + 1);
        }
    }
    cout << ans << endl;
    for(int i = 0;i < v.size() ;++i){
        cout << v[i] << " ";
    }
    return 0;
}
