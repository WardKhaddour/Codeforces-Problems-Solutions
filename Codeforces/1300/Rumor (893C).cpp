#include <bits/stdc++.h>
#include <ctime>
#define int long long int
#define ull unsigned long long int
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
const	int dx[] = {1, 0, 0, -1};
const	int dy[] = {0, 1, -1 ,0};

vector<int> gr[N];
vector<int> costs(N);
bool vis[N] = {0};
int cost = 0;

void dfs(int node){

	vis[node] = true;
	for(auto x : gr[node]){
		if(!vis[x]){
			cost = min(cost, costs[x]);
			dfs(x);
		}
	}
}

int32_t main(){
	fastIO();
	int n, m, ans = 0;
	cin >> n >> m;
	for(int i = 1;i <= n; ++i)
		cin >> costs[i];

	for(int i = 0;i < m; ++i){
		int u, v;
		cin >> u >> v;
		gr[u].push_back(v);
		gr[v].push_back(u);
	}

	for(int i = 1; i <= n; ++i){
		if(!vis[i]){
			cost = costs[i];
			
			dfs(i);

			ans += cost;
		}
	}
	cout << ans;

	return 0;
}
