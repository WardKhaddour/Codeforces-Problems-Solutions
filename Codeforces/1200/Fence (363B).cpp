#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
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
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	vector<int> sums;
 
	for(int i = 0;i < n; ++i){
		cin >> v[i];
	}
 
	sums.pb(v[0] + v[1] + v[2]);
	int j = 0;
	for(int i = k;i < n ; i ++){
		sums.pb(sums[j] + v[i] - v[i - k]);
		j++;
	}
 
	int mn = sums[0], ans = 0;
	for(int i = 1; i < sums.size(); ++i){
		if(sums[i] < mn){
			mn = sums[i];
			ans = i;
		}
	}
	cout << ans + 1;
	return 0;
}