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
	int h1, a1, c1, h2, a2, vStrikes, mStrikes,rounds(0);
	vector<string> v;
	cin >> h1 >> a1 >> c1 >> h2 >> a2;
	while(true){
		vStrikes = ceil((double) h2 / a1);
		mStrikes = ceil((double) h1 / a2);
		if(mStrikes < vStrikes){
			h1 += c1;
			v.pb("HEAL");
		}
		else{
			h2 -= a1;
			v.pb("STRIKE");
		}
		rounds++;
		if(h1 <= 0 || h2 <= 0)
			break;
		h1 -= a2;
	}  

	cout << rounds << endl;
	for(auto i : v)
		cout << i << endl;
	return 0;
}
