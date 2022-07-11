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

int main(){
	fastIO();
	int n;
	cin >> n;
	map <int,vector<int>> m;
	vector<pair<int,int>> ans;
	for(int i = 1;i <= n; ++i){
		int x;
		cin >> x;
		m[x].push_back(i);
	}

	for(auto i : m){
		vector<int> v = i.second;
		int def;
		v.size() == 1 ? def = 0 : def = v[1] - v[0];
		bool ok = true;
		for(int j = 2;j < v.size(); ++j){
			if(v[j] - v[j - 1] != def){
				ok = false;
			}
		}
		if(ok){
			ans.push_back({i.first, def});
		}
	}
	m.clear();
	cout << ans.size() << endl;
	for(auto i : ans){
		cout << i.first << " " << i.second << endl;
	}
	return 0;
}
