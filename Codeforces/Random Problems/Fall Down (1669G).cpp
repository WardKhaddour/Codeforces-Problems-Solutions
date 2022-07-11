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


int main(){
	fastIO();
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		char a[55][55];
		for(int i = 0;i < n; ++i){
			for(int j = 0;j < m ;++j){
				cin >> a[i][j];
			}
		}

		for(int i = n - 1;i >= 0; --i){
			for(int j = 0;j < m ;++j){
				if(a[i][j] == '*'){
					int tmp = i + 1;
					while(tmp < n && a[tmp][j] == '.'){
						a[tmp - 1][j] = '.';
						a[tmp][j] = '*';
						// a[tmp + 1][j] = '*';
						tmp++;
					}
				}
			}
		}
		for(int i = 0;i < n; ++i){
			for(int j = 0;j < m ;++j){
				cout << a[i][j];
			}
			cout << endl;
		}
	}

	return 0;
}
