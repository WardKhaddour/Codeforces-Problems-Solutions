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
	int k, n, m;
	cin >> k >> n >> m;
	vector<int> a(n), b(m), ans;

	for(int i = 0;i < n; ++i){
		cin >> a[i];
	}
	for(int i = 0;i < m ;++i){
		cin >> b[i];
	}


	int i = 0, j = 0;
	while(i < n && j < m){
		if(a[i] > k && b[j] > k){
			cout << -1 << endl;
			return;
		}
		if(a[i] == 0){
			ans.push_back(a[i]);
			i++;
			k++;
		}
		else if(b[j] == 0){
			ans.push_back(b[j]);
			j++;
			k++;
		}
		else if(a[i] <= k){
			ans.push_back(a[i]);
			i++;
		}
		else if(b[j] <= k){
			ans.push_back(b[j]);
			j++;
		}
	}

	for(int c = i;c < n; c++){
		if(a[c] > k){
			cout << -1 << endl;
			return;
		}
		if(a[c] == 0){
			k++;
		}
		ans.push_back(a[c]);
	}
	

	for(int c = j;c < m; c++){
		if(b[c] > k){
			cout << -1 << endl;
			return;
		}
		if(b[c] == 0){
			k++;
		}
		ans.push_back(b[c]);
	}
	

	for(auto i : ans){
		cout << i << " ";
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