#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define endl "\n"
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

int32_t main(){
	fastscan();
	short n, m;
	cin >> n >> m;
	vector <string> switches(n);
	vector <short> state(m);
	for(short i = 0;i < n; ++i){
		string s;
		cin >> s;
		switches[i] = s;
		for(short j = 0;j < m; ++j){
			if(s[j] == '1'){
				state[j]++;
			}
		}
	}
	short c(0);
	for(auto i : switches){
		for(short j = 0;j < m; ++j){
			if(i[j] == '1'){
				state[j]--;
			}
		}
		for(short j = 0;j < m; ++j){
			if(state[j] == 0){
				c++;
				break;
			}
		}
		for(short j = 0;j < m; ++j){
			if(i[j] == '1'){
				state[j]++;
			}
		}
	}
	if(c == n) cout << "NO\n";
	else cout << "YES\n";
	return 0;
}
