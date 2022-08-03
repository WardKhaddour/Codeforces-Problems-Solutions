#include <bits/stdc++.h>

using namespace std;

int main(){
    int s, n;
    cin >> s >> n;
    vector<pair<int, int> > dragons;
    bool loose = false;
    for(int i = 0;i < n;++i){
        int x, y;
        cin >> x >> y;
        dragons.push_back(make_pair(x ,y));
    }

    sort(dragons.begin(), dragons.end());
    for(int i = 0;i < n; ++i){
        if(s > dragons[i].first) {
            s += dragons[i].second;
        }
        else{
            loose = true;
            break;
        }
    }
    loose ? cout << "NO" :cout << "YES";
}
