#include <bits/stdc++.h>
#include <ctime>
#define int long long int
#define F first
#define S second
#define pb push_back
#define pi pair<int,int>
#define mp make_pair 
#define endl "\n"
#define dbg printf("HERE!!!")
#define rep(n) for(int i = 0;i < n; ++i)
#define fastscan() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
using namespace std;
 
 
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr (names + 1, ',');
	cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
 
bool comparePair(pi p1, pi p2){
	if(p1.F > p2.F) return true;
	if(p1.F == p2.F && p1.S < p2.S) return true;
	return false;
}
 
int32_t main(){
	fastscan();
	int n;
	cin >> n;
	vector <int> v(n);
	cin >> v[0];
	vector <int> sums;
	vector <int> sortedSums;
	sums.pb(v[0]);
	for(int i = 1;i < n; ++i){
		cin >> v[i];
		sums.pb(v[i] + sums[i-1]);
	}
	sort(v.begin(), v.end());
	sortedSums.pb(v[0]);
	for(int i = 1;i < n; ++i){
		sortedSums.pb(v[i] + sortedSums[i-1]);
	}
	v.clear();
	int m;
	cin >> m;
	while(m--){
		int type, l, r;
		cin >> type >> l >> r;
		if(type == 2){
			if(l == 1) 
				cout << sortedSums[r - 1] << endl;
			else
				cout << sortedSums[r - 1] - sortedSums[l - 2] << endl;
		}
		else{
			if(l == 1)
				cout << sums[r - 1] << endl;
			else 
				cout << sums[r - 1] - sums[l - 2] << endl;
		}
	}
	return 0;
}
