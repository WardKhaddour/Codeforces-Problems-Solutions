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

const int daigonalx[] = {-1, 1, -1, 1};
const int daigonaly[] = {-1, 1, 1, -1};

vector<int> gr[N];
bool vis[N] = {0};


int main(){
	fastIO();
	int n, l = 0, r = 0;
	cin >> n;
	string s;
	cin >> s;
	for(int i = 0;i < n; ++i){
		if(s[i] == 'L')
			l++;
		else if(s[i] == 'R')
			r++;
	}

	if(r > 0 && l == 0){
		for(int i = 0;i < n - 1; ++i){
			if(s[i] == '.' && s[i + 1] == 'R'){
				cout << i + 2 << " ";
			}
			if(s[i] == 'R' && s[i + 1] == '.'){
				cout << i + 2 << " ";
			}
		}

	}
	else if(r == 0 && l > 0){
		for(int i = n - 2;i >= 0; --i){
			if(s[i] == '.' && s[i + 1] == 'L'){
				cout << i + 1 << " ";
			}
			if(s[i] == 'L' && s[i + 1] == '.'){
				cout << i + 1 << " ";
			}
		}

	}
	else if(l > 0 && r > 0){
		for(int i = n - 1;i > 0; --i){
			if(s[i] == 'L' && s[i + 1] == '.'){
				cout << i + 1 << " ";
			}
			if(s[i] == 'R' && s[i + 1] == 'L'){
				cout << i + 2 << " ";
			}
		}
	}
	return 0;
}
