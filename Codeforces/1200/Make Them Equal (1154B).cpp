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
 
void solve(){}
int32_t main(){
	fastscan();
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i = 0;i < n; ++i)
		cin >> v[i];
		
	sort(v.begin(), v.end());

	if(v[0] == v[n - 1]){
		cout << 0 << endl;

		return 0;
	}

	int  counter = 0;
	while(counter < 1000){

		bool ok = true;
		int ans = abs(v[0] - counter);
		for(int i = 1;i < n; ++i){
			if(!(v[i] - ans == counter || v[i] + ans == counter || v[i] == counter)){
				ok = false;
				break;
			}

		}
		if(ok){
			cout << ans << endl;
			return 0;
		}
		counter++;
		
	}

	cout << -1 << endl;
	return 0;
}
