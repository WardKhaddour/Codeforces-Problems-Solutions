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

const int N = 3 * 1e5 + 5;

vector<int> gr[N];
vector<int> colors(N);
bool visited [N] = {0};
int r = 0, b = 0, ans = 0;

pair<int,int> dfs(int node){
	visited[node] = true;
	int r1, b1;
	if(colors[node] == 1){
		r1 = 1;
		b1 = 0;
	}
	else if(colors[node] == 2){
		r1 = 0;
		b1 = 1;
	}
	else{
		r1 = 0;
		b1 = 0;
	}
	for(auto x : gr[node]){
		if(!visited[x]){
		auto subTree = dfs(x);
		if(subTree.first == r && subTree.second == 0){
			ans++;
		} 
		else if(subTree.first == 0 && subTree.second == b){
			ans++;
		}
		r1 += subTree.first;
		b1 += subTree.second;
		}
	}

	return {r1, b1};
}

int32_t main(){
	fastIO();
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i){
		cin >> colors[i];
		if(colors[i] == 1){
			r++;
		}
		if(colors[i] == 2){
			b++;
		}
	}

	for(int i = 1;i < n; ++i){
		int u, v;
		cin >> u >> v;
		gr[u].push_back(v);
		gr[v].push_back(u);
	}
	dfs(n - 1);

	cout << ans << endl;

	return 0;
}