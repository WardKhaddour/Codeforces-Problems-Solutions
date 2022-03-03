#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[2*n];
    set <int> s;
    for(int i = 0;i < 2*n; ++i){
        cin >> a[i];
        s.insert(a[i]);
    }
    sort(a,a + 2 * n);
    if(s.size() == 1){
        cout << -1;
        return 0;
    }
    for(int i = 0;i < 2 * n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
