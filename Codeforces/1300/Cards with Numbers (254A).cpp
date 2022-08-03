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

int main(){
	fastIO();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	map<int,vector<int>> m;
	for(int i = 1;i <= 2 * n; ++i){
		int x;
		cin >> x;
		m[x].push_back(i);
	}

	for(auto i : m){
		if(i.second.size() % 2 != 0){
			cout << -1 << endl;
			return 0;
		}
	}

	for(auto i : m){
		int c = 0;
		for(auto j : i.second){
			cout << j;
			c++;
			if(c == 2){
				cout << endl;
				c = 0;
			}
			else{
				cout << " ";
			}
		}
	}

	return 0;
}
