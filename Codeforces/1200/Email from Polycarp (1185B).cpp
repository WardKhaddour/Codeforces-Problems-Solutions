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
	cin >> n;
	while(n--){
		string s, t;
		cin >> s >> t;
		if(s == t){
			cout << "YES\n";
			continue;
		}
		else if(s.length() > t.length()){
			cout << "NO\n";
			continue;
		}
		else{
			vector <pair<char,int>> v1, v2;
			int c(1);
			for(int i = 0;i < s.size() ;++i){
				if(s[i] == s[i + 1]){
					c++;
				}
				else{
					v1.pb(mp(s[i],c));
					c = 1;
				}
			}
			for(int i = 0;i < t.size() ;++i){
				if(t[i] == t[i + 1]){
					c++;
				}
				else{
					v2.pb(mp(t[i],c));
					c = 1;
				}
			}
			if(v1.size() != v2.size()){
				cout << "NO\n";

			}
			else{
				bool ok = true;
				for(int i = 0;i < v1.size(); ++i){
					if(v1[i].F == v2[i].F && v1[i].S <= v2[i].S){
						continue;
					}
					else{
						cout << "NO\n";
						ok = false;
						break;
					}
				}
				if(ok){
					cout << "YES\n";
				}
			}
		}
	}
	return 0;
}
