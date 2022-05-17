#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#define F first
#define S second
#define pb push_back
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


int main(){
	int n, m;
	cin >> n >> m;
	vector<ll> minutes(n + 1);
	vector<ll> allMin;
	minutes[0] = 0;
	for(ll i = 1;i <= n; ++i){
		ll c, t;
		cin >> c >> t;
		minutes[i] = minutes[i - 1] + c * t;
	}
	int j = 1;
	for(int i = 0;i < m; ++i){
		int v;
		cin >> v;
		while(v > minutes[j]){
			j++;
		}
		cout << j << endl;
	}

	return 0;
}