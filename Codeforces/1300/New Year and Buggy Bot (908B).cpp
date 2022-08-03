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
#define coutVec(v, n) for(auto i : v){cout << i << " ";} cout << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define rep1(i, n) for(int j = i;j < n; ++j)

#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

using namespace std;

const int N = 1e5 + 5;
const	int dx[] = {1, 0, 0, -1};
const	int dy[] = {0, 1, -1 ,0};



int main(){
	fastIO();
	int n, m, sti, stj, eni, enj, ans = 0;
	vector<int> p {0, 1, 2, 3};

	cin >> n >> m;
	char a[55][55];
	string s;
	for(int i = 0;i < n; ++i){
		for(int j = 0;j < m; ++j){
			cin >> a[i][j];

			if(a[i][j] == 'S'){
				sti = i;
				stj = j;
			}
			if(a[i][j] == 'E'){
				eni = i;
				enj = j;
			}
		}
	}
	cin >> s;

	do{
		int x = sti, y = stj;
		bool ok = true;
		for(auto ch : s){
			x += dx[p[ch - '0']];
			y += dy[p[ch - '0']];
			if(x >= n || x < 0 || y >= m || y < 0 || a[x][y] == '#'){
				ok = false;
				break;
			}

			if(x == eni && y == enj && ok){
				ans++;
				break;
			}
		}
	} while(next_permutation(p.begin(), p.end()));

	cout << ans << endl;
	return 0;
}
