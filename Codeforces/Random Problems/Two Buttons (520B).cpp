#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
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
#define coutVec(v) for(auto i : v){cout << i << " ";} cout << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define rep1(i, n) for(int j = i;j < n; ++j)

#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

using namespace std;

const int N = 1e5 + 5;

const	int dx4[] = {1, 0, 0, -1};
const	int dy4[] = {0, 1, -1 ,0};

const	int dx8[] = {1, 0, 0, -1, -1, 1, -1, 1};
const	int dy8[] = {0, 1, -1 ,0, -1, 1, 1, -1};

vector<int> gr[N];
bool vis[N] = {0};

void generateGR(int n, int m){
	if(n == m || n <= 0 || n > 10000){
		return;
	}
	if(vis[n]){
		return;
	}
	vis[n] = true;
	gr[n].push_back(n - 1);
	gr[n].push_back(n * 2);
	generateGR(n - 1, m);
	generateGR(n * 2, m);
	return;
}


int bfs(int node, int m){
	queue<int> q;
	int dist[N] = {0};
	q.push(node);
	vis[node] = true;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto x : gr[u]){
			if(!vis[x]){
				q.push(x);
				vis[x] = true;
				dist[x] = dist[u] + 1;
			}
		}
	}

	return dist[m];
}

int main(){
	fastIO();
	int n, m;
	cin >> n >> m;
	generateGR(n ,m);
	for(int i = 0;i < N; ++i){
		vis[i] = 0;
	}

	cout << bfs(n, m);
	return 0;
}
