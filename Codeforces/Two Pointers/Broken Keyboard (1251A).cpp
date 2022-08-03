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
	string s;
	cin >> s;
	set <char> res;
	int i = 0, j = 1;
	while(i < s.length()){
		if(s[i] == s[j]){
			i+=2;
			j+=2;
			continue;
		}
		if (s[i] != s[j] && j < s.length()){
			res.insert(s[i]);
			i++;
			j++;
		}
		else{
			res.insert(s[i]);
			i++;
		}
	}

	for(auto i : res){
		cout << i;
	}
	cout << endl;
}

int32_t main(){
	fastIO();
	int t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}