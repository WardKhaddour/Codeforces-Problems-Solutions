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

vector <int> gr[1001];
bool visited[1001];
int countVisited[1001];

void clr(){
	memset(visited, false, sizeof(visited));
	memset(countVisited, false, sizeof(countVisited));
	for(int i = 0;i < 1001; ++i){
		gr[i].clear();
	}
}

void bfs(int node){
	memset(visited, false, sizeof(visited));
	queue<int> q;
	q.push(node);
	visited[node] = true;
	countVisited[node]++;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto x : gr[u]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
				countVisited[x]++;
			}
		}
	}
}

int32_t main(){
	fastIO();
	int t, cases = 1;
	cin >> t;
	while(t--){
		clr();
		int k, n, m, ans = 0;
		cin >> k >> n >> m;
		set<int> cities;
		for(int i = 0;i < k; ++i){
			int x;
			cin >> x;
			cities.insert(x);
		}
		for(int i = 0;i < m; ++i){
			int u, v;	
			cin >> u >> v;
			gr[u].push_back(v);
		}
		for(auto i : cities){
			bfs(i);
		}

		for(int i = 0;i <= 1000; ++i){
			if(countVisited[i] == cities.size()){
				ans++;
			}
		}
		cout << "Case "<< cases++ << ": "<< ans << endl;

	}
	return 0;
}