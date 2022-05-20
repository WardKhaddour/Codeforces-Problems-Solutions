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
	int t;
	cin >> t;
	while(t--){
  		int n, x, y, d;
		cin >> n >> x >> y >> d;
		if(abs(y - x) % d == 0){
			cout << abs(y - x) / d << endl;
			continue;
		}
		int ans = 0;
    int d1 = y - 1;
    int a1 = -1;
    if (d1 % d == 0) {
      a1 = ceil((double)x / d) + d1 / d;
    }
    int d2 = n - y;
    int a2 = -1;
    if (d2 % d == 0) {
    	a2 = ceil((double)(n - x) / d) + d2 / d;
    }
    if (a1 == -1 || a2 == -1) {
      ans = max(a1, a2);
    }
    else {
      ans = min(a1, a2);
    }
			
		cout << ans << endl;
	}
	return 0;
}
