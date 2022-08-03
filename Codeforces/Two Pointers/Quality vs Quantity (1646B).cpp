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
	int n;
	cin >> n;
	vi v(n);
	cinVec(v)
	sort1(v);
	int i = 0, j = n - 1, rCount = 0, bCount = 0, rSum = 0, bSum = 0;
	bool ok = false;
	while(i <= j){
			bSum += v[i];
			bCount++;
			if(rSum > bSum && rCount < bCount){
				ok = true;
				break;
			}
			rSum += v[j];
			rCount++;
			i++;
			j--;
	}
	if(ok)
		cout << "YES\n";
	else
		cout << "NO\n";
}

int32_t main(){
	fastIO();
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}