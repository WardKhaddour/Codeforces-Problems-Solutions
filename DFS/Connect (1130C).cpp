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

char a[55][55];
int vis[55][55];
int dirx[4] = {1,0,-1,0};
int diry[4] = {0,1,0,-1};
int n, ans = 0;
bool isValidNode(int posi, int posj){
	return posi <= n && posi > 0 && posj <= n && posj > 0;
}

void dfs(int i, int j, int val){
	vis[i][j] = val;

	for(int k = 0;k < 4; ++k){
		int x = i + dirx[k];
		int y = j + diry[k];

		if(vis[x][y] == 0 && a[x][y] == '0' && isValidNode(x, y)){
			dfs(x, y, val);
		}
	}
}
int32_t main(){
	fastIO();
	int r1, c1, r2, c2;
	cin >> n >> r1 >> c1 >> r2 >> c2;
	for(int i = 1;i <= n; ++i){
		for(int j = 1;j <= n ;++j){
			cin >> a[i][j];
		}
	}

	dfs(r1, c1, 1);
	if(vis[r2][c2] == 1){
		cout << "0" << endl;
		return 0;
	}
	dfs(r2, c2, -1);
	ans = INT_MAX;
	for(int i = 1;i <= n; ++i){
		for(int j = 1;j <= n ;++j){
			if(a[i][j] == '0' && vis[i][j] == 1){
				for(int k = 1;k <= n; ++k){
					for(int l = 1;l <= n ;++l){
						if(a[k][l] == '0' && vis[k][l] == -1){
							int d = (i - k) * (i - k) + (j - l) * (j - l);
							ans = min(ans, d);
						}
					}
				}
			}
		}
	}


	cout << ans;
	return 0;
}