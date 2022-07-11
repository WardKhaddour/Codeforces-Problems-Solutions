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

const int N = 15 * 1e4 + 5;

vector<int> gr[N];

bool visited[N];

void dfs(int node, int &ver, int &edg){
	ver++;
	edg += gr[node].size() ;
	visited[node] = true;
	for(auto x : gr[node]){
		if(!visited[x]){
			dfs(x, ver, edg);
		}
	}
}

int32_t main(){
	fastIO();
	int n, m;
	cin >> n >> m;
	for(int i = 0;i < m; ++i){
		int u,v;
		cin >> u >> v;
		gr[u].push_back(v);
		gr[v].push_back(u);
	}

	for(int i = 1;i <= n; ++i){
		int ver = 0;
		int edg = 0;
		if(!visited[i]){
			dfs(i, ver, edg);
			if(edg != (ver * (ver - 1))){
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	cout << "YES" << endl;

	return 0;
}