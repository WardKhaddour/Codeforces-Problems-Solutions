#include <iostream>

using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n == 2 && s[0] >= s[1])
            cout << "NO" << endl;
        else{
            string ans = "";
            for(int i = 1;i < n;++i){
                ans += s[i];
            }
            cout << "YES" <<endl << 2 << endl;
            cout << s[0] << " " << ans << endl;
        }
    }
    return 0;
}
