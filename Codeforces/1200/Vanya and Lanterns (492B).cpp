#include <bits/stdc++.h>
#include <ctime>
#define int long long int
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
	

int32_t main(){
	int n, l;
	cin >> n >> l;
	vector <int> v(n);
	for(int i = 0;i < n;++i)
		cin >> v[i];
	sort(v.begin(), v.end());
	int mx = max(v[0], l - v[n - 1]) * 2;
	for(int i = 0;i < n - 1; ++i){
		mx = max(mx,(v[i + 1] - v[i]));
	}
	double ans = mx;
	printf("%.20f",ans / 2);
	return 0;
}
