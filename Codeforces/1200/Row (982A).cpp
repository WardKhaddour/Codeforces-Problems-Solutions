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
	int n;
	string s;
	cin >> n >> s;
	if(n == 1 && s == "1"){
		cout << "YES\n";
		return 0;
	}
	if(n == 1 && s == "0"){
		cout << "NO\n";
		return 0;
	}
	if(n == 2){
		if(s == "10" || s == "01"){
			cout << "YES\n";
			return 0;
		}
		cout << "NO\n";
		return 0;
	}
	if(s[n - 1] == '0' && s[n - 2] == '0'){
		cout << "NO\n";
		return 0;
	}
	if(s[0] == '0' && s[1] == '0'){
		cout << "NO\n";
		return 0;
	}
	for(int i = 1; i < n - 1 ; ++i){
		if(s[i] == '0'){
			if(s[i - 1] == '0' && s[i + 1] == '0'){
				cout << "NO\n";
				return 0;
			}
		}
		else{
			if(s[i - 1] == '1' || s[i + 1] == '1'){
				cout << "NO\n";
				return 0;
			}
		}
	}

	cout << "YES\n";
	return 0;
}
