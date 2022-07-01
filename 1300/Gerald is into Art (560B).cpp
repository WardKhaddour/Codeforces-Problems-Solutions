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
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

	vector<pair<pair<int,int>,pair<int,int>>> v;
	v.push_back({{a2, b2},{a3, b3}});

	v.push_back({{a2, b2},{b3, a3}});

	v.push_back({{b2, a2},{a3, b3}});

	v.push_back({{b2, a2},{b3, a3}});




	for(auto i : v){
		if(((i.first.first + i.second.first) <= a1) &&
		 (i.first.second <= b1) &&
		 (i.second.second <= b1)){
			cout << "YES" << endl;
			return 0;
		}
		if(((i.first.first + i.second.first) <= b1) &&
		 (i.first.second <= a1) &&
		 (i.second.second <= a1)){
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}
