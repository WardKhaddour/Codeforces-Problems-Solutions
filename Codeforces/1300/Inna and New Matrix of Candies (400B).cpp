#include <bits/stdc++.h>
#include <ctime>
#define int long long int
#define F first
#define S second
#define pb push_back
#define pi pair<int,int>
#define mp make_pair
#define endl "\n"
#define vi vector<int>
#define dbg cout << "HERE!!!" << endl
#define cinVec(v, n) for(int i = 0;i < n; ++i) cin >> v[i]
#define coutVec(v, n) for(auto i : v){cout << i << " ";} cout << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define rep1(i, n) for(int j = i;j < n; ++j)

#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

using namespace std;

const int N = 1e5 + 5;

int32_t main(){
	fastIO();
	int n, m;
	cin >> n >> m;
	char a[n][m];
	int ans = 0;
	set <int> dist;

	for(int i = 0;i < n; ++i){
		int s = 0, g = 0;
		for(int j = 0;j < m; ++j){
			cin >> a[i][j];
			if(a[i][j] == 'S'){
				s = j;
			}
			if(a[i][j] == 'G'){
				g = j;
			}
		}
		dist.insert(s - g);
			if(s < g) {
				ans = -1;
		}
	}
	if(ans != -1){
		ans = dist.size();
	}
	cout << ans << endl;
	return 0;
}
