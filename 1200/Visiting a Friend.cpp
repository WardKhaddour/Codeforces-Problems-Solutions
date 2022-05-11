#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
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
	fastread();
	int n, m;
	set <pair<int, int>> s;
	cin >> n >> m;
	for(int i = 0;i < n; ++i){
		int x, y;
		cin >> x >> y;
		for(int j = x + 1; j <= y; j++){
			s.insert({j - 1, j});
		}
	}
	if(s.size() == m){
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	return 0;
}