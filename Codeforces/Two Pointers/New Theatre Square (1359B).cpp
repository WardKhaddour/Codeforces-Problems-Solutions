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
#define cinVec(v) for(int i = 0;i < n; ++i){cin >> v[i];}
#define coutVec(V) for(auto i : v){cout << i << " ";} cout << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


using namespace std;

void solve(){
	int n, m, c1, c2, total = 0;
	cin >> n >> m >> c1 >> c2;
	char a[n][m];
	for(int i = 0;i < n ;++i){
		for(int j = 0;j < m; ++j){
			cin >> a[i][j];
		}
	}
	for(int i = 0;i < n ;++i){
		int j = 0, k = 1;
		while(j < m){
			if(a[i][j] == '.' && a[i][k] == '.' && k < m){
				total += min(2 * c1, c2);
				j += 2;
				k += 2;
			}
			else if(a[i][j] == '.'){
				total += c1;
				j += 2;
				k += 2;
			}
			else{
				j++;
				k++;
			}
		}
	}
	cout << total << endl;
}

int32_t main(){
	fastIO();
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}