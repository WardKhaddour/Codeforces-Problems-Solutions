#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
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

const int N = 30005;

vector<pair<int,int>> gr[N];
bool visited[N];
int dist[N];
int cases = 0, ans;

void clr(){
	for(int i = 0; i < N; ++i){
		visited[i] = 0;
		dist[i] = 0;
	}
}

void clrGr(){
	for(int i = 0;i < N; ++i){
		gr[i].clear();
	}
}

void bfs(int node, int n){
	queue<pair<int,int>> q;
	visited[node] = true;
	dist[node] = 0;
	q.push({node, 0});
	while(!q.empty()){
		auto cur = q.front();
		q.pop();
		for (auto v : gr[cur.first]){
			if(!visited[v.first]){
				visited[v.first] = true;
				dist[v.first] += cur.second + v.second;
				q.push(make_pair(v.first, dist[v.first]));
			}
		}
	}
}

void solve(){
	clr();
	clrGr();
	int n;
	ans = 0;
	cin >> n;
	for(int i = 0;i < n - 1; ++i){
		int u, v, w;
		cin >> u >> v >> w;
		gr[u].push_back(make_pair(v, w));
		gr[v].push_back(make_pair(u, w));

	}

	bfs(0 ,n);
	int maxDist = -1, firstNode;
	for(int i = 0; i < n; ++i){
 	if(dist[i] > maxDist){
   maxDist = dist[i];
   firstNode = i;
  }
 }

 clr();

 bfs(firstNode, n);

 for(int i = 0;i < n; ++i){
 	if(dist[i] > ans){
 		ans = dist[i];
 	}
 }

	cases++;
	cout <<"Case " << cases << ": " << ans << endl;
}
int32_t main(){
	fastIO();
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}