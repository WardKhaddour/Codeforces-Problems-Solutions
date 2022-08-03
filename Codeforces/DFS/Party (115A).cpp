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

const int N = 2005;

vector<int> gr[N];
vector<int> root;
bool visited[N] = {0};
int dist[N] = {0};
int ans = 0;

void dfs(int node){


	visited[node] = true;

	for(auto x : gr[node]){
		if(!visited[x]){
			dist[x] = dist[node] + 1;
			ans = max(ans, dist[x]);
			dfs(x);
		}
	}
}

int32_t main(){
	fastIO();
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i){
		int v;
		cin >> v;
		if(v != -1){
			gr[v].push_back(i);
		}
		else{
			root.push_back(i);
		}
	}

	for(auto i : root){
		dist[i] = 1;
		dfs(i);
	}

	ans > 1 ? cout << ans : cout << 1;
	return 0;
}