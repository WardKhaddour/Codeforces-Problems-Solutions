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
	int n, k;
	cin >> n >> k;

	string s, ans = "";
	cin >> s;
	map <char, int> m;
	for(int i = 0;i < n; ++i){
		m[s[i]]++;
	}

	for(auto it = m.begin();it != m.end(); ++it){
		if(it->second >= k){
			int a = it->second;
			it->second -= k;
			k -= a;
		}
		else{
			int a = it->second;
			it->second = 0;
			k -= a;
		}
	}
	for(int i = n - 1;i >= 0; --i){
		if(m[s[i]] == 0) continue;
		ans += s[i];
		m[s[i]]--;
	}
	reverse(ans.begin(), ans.end());
	cout << ans << endl;
	
	return 0;
}
