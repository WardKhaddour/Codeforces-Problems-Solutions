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
	string n;
	cin >> n;
	int s = n.size();
	if(s == 1){
		if((n[0] - '0') % 4 == 0){
			cout << 4 << endl;
			return 0;
		}
		cout << 0 << endl;
		return 0;
	}
	int a = n[s - 1] - '0';
	int b = n[s - 2] - '0';
	int c = b * 10 + a;
	if(c % 4 == 0){
		cout << 4 << endl;
		return 0;
	}
	cout << 0 << endl;
	return 0;
}
