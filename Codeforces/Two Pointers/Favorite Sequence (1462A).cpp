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
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


using namespace std;

void solve(){
	int n;
	bool toLeft = true;
	cin >> n;
	vector<int> v(n);
	vector<int> ans(n);
	for(int i = 0;i < n; ++i){
		cin >> v[i];
	}


	int i = 0, j = n - 1, k = 0;

	while(i <= j){
		if(toLeft){
			ans[k] = v[i];
			i++;
		}
		else{
			ans[k] = v[j];
			j--;
		}
		k++;
		toLeft = !toLeft;
	}
	for(auto a : ans){
		cout << a << " ";
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