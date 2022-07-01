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
const int P = 1073741824;

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
		char a[8][8];
		for(int i = 0;i < 8; ++i){
			for(int j = 0;j < 8; ++j){
				cin >> a[i][j];
			}
		}
		for(int i = 1;i < 7; ++i){
			for(int j = 1;j < 7; ++j){
				if(a[i][j] == '#' &&
				a[i + 1][j + 1] == '#' &&
				a[i - 1][j - 1] == '#' &&
				a[i + 1][j - 1] =='#'&&
				a[i - 1][j + 1] == '#'){
					cout << i + 1 << " " << j + 1 << endl;
				break;
				}
			}
		}
	}
	return 0;
}
