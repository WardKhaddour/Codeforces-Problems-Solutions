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

vector<int> gr[55];
bool visited [55] = {0};
int danger = 1;

int dfs(int node){
	visited[node] = true;
	for(auto x : gr[node]){
		if(!visited[x]){
			danger *= 2;
			dfs(x);
		}
	}

	return danger;
}

int32_t main(){
	fastIO();
	int n, m;
	cin >> n >> m;
	for(int i = 0;i < m; ++i){
		int x, y;
		cin >> x >> y;
		gr[x].push_back(y);
		gr[y].push_back(x);

	}
	int ans = 1;
	for(int i = 1; i <= n; ++i){
		ans = max(ans, dfs(i));
	}
	cout << ans << endl;

	return 0;
}