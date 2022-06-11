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

int calcDist(int x1, int x2, int y1, int y2){
	return ((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2));
}

bool check(int x, int y, vector<int> xi,vector<int> yi, vector<int> ri){
	for(int i = 0;i < xi.size(); ++i){
		if(calcDist(x,xi[i],y,yi[i]) <= ri[i] * ri[i]){
			return 0;
		}
	}
	return 1;
}

int32_t main(){
	fastscan();
	int x1, y1, x2, y2, n, counter = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	cin >> n;
	vector<int> xi (n), yi(n), ri(n);
	for(int i = 0;i < n; ++i){
		cin >> xi[i] >> yi[i] >> ri[i];
	}

	for(int i = min(x1,x2); i <= max(x1,x2); ++i){
		counter += check(i,y1,xi,yi,ri) + check(i,y2,xi,yi,ri);
	}
	for(int i = min(y1,y2) + 1; i < max(y1,y2); ++i){
		counter += check(x1,i,xi,yi,ri) + check(x2,i,xi,yi,ri);
	}
	cout << counter << endl;
	return 0;
}
