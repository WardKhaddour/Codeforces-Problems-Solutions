#include <bits/stdc++.h>
#include <ctime>
#define int long long int
#define F first
#define S second
#define pb push_back
#define pi pair<int,int>
#define mp make_pair 
#define endl "\n"
#define dbg cout << "HERE!!!" << endl
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

bool reversed(int a, int b){
	return a - b > 0;
}
 
int32_t main(){
	fastscan();
	int n, m;
	cin >> n >> m;
	vector<int> v(n), sums;
	for(int i = 0;i < n; ++i){
		cin >> v[i];
	}
	sums.pb(v[0]);
	for(int i = 1;i < n; ++i){
		sums.pb(v[i] + sums[i - 1]);
	}

	for(int i = 0;i < n; ++i){
		if(sums[i] <= m){
			cout << 0 << " ";
		}
		else{
			int def = sums[i] - m, c(0);
			vector<int> newV (v.begin(), v.begin() + i);
			sort(newV.begin(), newV.end(),reversed);
			for(int j = 0;j < i; ++j){
				if(def <= newV[j]){
					c++;
					cout << c << " ";
					break;
				}
				else{
					def -= newV[j];
					c++;
				}
			}
		}
	}
	return 0;
}
