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
#define cinVec(v) for(int i = 0;i < n; ++i) cin >> v[i]
#define coutVec(V) for(auto i : v){cout << i << " ";} cout << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define rep1(i, n) for(int j = i;j < n; ++j)

#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0;i < n; ++i){
		cin >> v[i];
	}
	int i = 0, j = n - 1, sum1 = 0, sum2 = 0, c = 0;
	while(i <= j){
		if(sum1 < sum2){
			sum1 += v[i];
			i++;
		}	
		else {
			sum2 += v[j];
			j--;
		}
		
		if(sum1 == sum2) {
			c = i + n - j - 1;
		}

	}
	
	cout << c << endl;
}

int32_t main(){
	fastIO();
	int t;
	cin >> t;
	while(t--)
		solve();

	return 0;
}