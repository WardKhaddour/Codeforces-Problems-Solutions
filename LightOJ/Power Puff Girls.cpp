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

int n, m, cases = 0;
char a[25][25];

int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};


bool isValidPos(int posi, int posj){
	return posi < n && posi >= 0 &&
	posj < m && posj >= 0 &&
	a[posi][posj] != 'm' && a[posi][posj] != '#';
}


int findShortestPath(int sourcei,int sourcej,
 int disti, int distj){
	queue<pair<int ,int>> q;
	bool visited[n][m] = {0};
	int dist [n][m] = {0};
	q.push({sourcei, sourcej});
	visited[sourcei][sourcej] = true;
	dist[sourcei][sourcej] = 0;
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int i = 0;i < 4; i++){
				int tx = x + dx[i];
				int ty = y + dy[i];
				if(visited[tx][ty] || !isValidPos(tx ,ty))
					continue;

				q.push({tx, ty});
				
				dist[tx][ty] = dist[x][y] + 1;
				visited[tx][ty] = true;
			}
			
		} 
	return dist[disti][distj];
}


void solve(){
	cin >> n >> m;
	int hi, hj;
	int ai, aj;
	int bi, bj;
	int ci, cj;
	for(int i = 0; i < n; i++){
		for(int j = 0;j < m; j++){
			cin >> a[i][j];
			if(a[i][j] == 'h'){
				hi = i;
				hj = j;
			}
			if(a[i][j] == 'a'){
				ai = i;
				aj = j;
			}
			if(a[i][j] == 'b'){
				bi = i;
				bj = j;
			}
			if(a[i][j] == 'c'){
				ci = i;
				cj = j;
			}
		}
	}

	int ans1 = findShortestPath(ai, aj, hi, hj);
	int ans2 = findShortestPath(bi, bj, hi, hj);
	int ans3 = findShortestPath(ci, cj, hi, hj);
	int ans = max({ans1, ans2, ans3});
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