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
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
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
	int n, m;
	cin >> n >> m;
	map<char,vector<pi>> M;
	vector<pi> wolves;
	vector<pi> pigs;

	for(int i = 0;i < n; ++i){
		for(int j = 0;j < m; ++j){
			char c;
			cin >> c;
			if(c == 'W'){
				wolves.pb(mp(i + 1, j + 1));
			}
			else if(c == 'P'){
				pigs.pb(mp(i + 1, j + 1));
			}
		}
	}

	int counter (0);
	for(int i = 0;i < wolves.size(); ++i){
		for(int j = 0;j < pigs.size(); ++j){
			int x = abs(wolves[i].F - pigs[j].F);
			int y = abs(wolves[i].S - pigs[j].S);
			if((x == 0 && y == 1) || (x == 1 && y == 0)){
				counter++;
				wolves[i]=mp(0,0);
			}
		}
	}

	cout << counter << endl;
	return 0;
}
