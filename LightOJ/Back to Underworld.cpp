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

vector <int> gr[20009];
bool visited[20009];
bool nodeType[20009];

void clr(){
	memset(visited, false, sizeof(visited));
	memset(nodeType, false, sizeof(nodeType));
	for(int i = 0;i < 20009; ++i){
		gr[i].clear();
	}
}

int bfs(int node){
	int a = 0, b = 0;
	queue<int> q;
	q.push(node);
	visited[node] = true;
	nodeType[node] = 1;
	a++;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto x : gr[u]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
				if(nodeType[u] == 1){
					nodeType[x] = 0;
					b++;
				}
				else{
					nodeType[x] = 1;
					a++;
				}
			}
		}
	}
	int mx = max(a, b);
	return mx;
}

int32_t main(){
	fastIO();
	int t, cases = 1;
	cin >> t;
	while(t--){
		int n, ans = 0;
		cin >> n;
		clr();
		for(int i = 0;i < n; ++i){
			int u, v;
			cin >> u >> v;
			gr[u].push_back(v);
			gr[v].push_back(u);
		}
		for(int i = 0;i < 20009; ++i){
			if(!visited[i] && !gr[i].empty()){
				ans += bfs(i);
			}
		}
		cout << "Case "<< cases++ << ": "<< ans << endl;

	}
	return 0;
}