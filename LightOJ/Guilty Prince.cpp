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
int w, h, ans, cases = 0;
char a[20][20];
bool vis[20][20] = {0};
bool isValidPos(int posi, int posj){
	return posi < h && posi >= 0 && posj < w && posj >= 0;
}

void findRechableCells(int posi, int posj){
	if(a[posi][posj] == '#' || vis[posi][posj] || !isValidPos(posi, posj)){
		return;
	}
	ans++;
	vis[posi][posj] = true;
	findRechableCells(posi , posj + 1);
	findRechableCells(posi + 1, posj);
	findRechableCells(posi - 1, posj);
	findRechableCells(posi , posj - 1);
}


void solve(){
	ans = 0;
	cin >> w >> h;
	
	int i1, j1;
	for(int i = 0; i < h; i++){
		for(int j = 0;j < w; j++){
			cin >> a[i][j];
			if(a[i][j] == '@'){
				i1 = i;
				j1 = j;
			}
		}
	}
	for(int i = 0; i < h; i++){
		for(int j = 0;j < w; j++){
			vis[i][j] = 0;
		}
	}

	findRechableCells(i1, j1);
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