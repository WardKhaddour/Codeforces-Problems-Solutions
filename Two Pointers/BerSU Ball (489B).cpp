
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

void solve(){}
int32_t main(){
	fastIO();
	int n, m, ans = 0;
	cin >> n;
	vi b(n);
	for(int i = 0;i < n; ++i)
		cin >> b[i];
	cin >> m;
	vi g(m);
	for(int i = 0;i < m; ++i)
		cin >> g[i];
	sort1(b);
	sort1(g);

	for(int i = 0;i < n; ++i){
		for(int j = 0;j < m; ++j){
			if(abs(b[i] - g[j]) == 1){
				ans ++;
				b[i] = -10;
				g[j] = -10;
			}
			if(b[i] == g[j] && b[i] != -10){
				ans ++;
				b[i] = -10;
				g[j] = -10;
			}
		}
	}
	cout << ans << endl;
	return 0;
}