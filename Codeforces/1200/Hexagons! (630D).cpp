#include <bits/stdc++.h>
#include <ctime>
#define int long long int
#define F first
#define S second
#define pb push_back
#define endl "\n"
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
	int n;
	cin >> n;
	int ans = 3 * (n * n + n) + 1;
	cout << ans << endl;
	return 0;
}

/*
1*6 + 2*6 + 3*6 + ... + (n-2)*6 + (n-1)*6 + n*6
6 * (1 + 2 + 3 + ... + n-2 + n-1 + n)
6 * (n / 2) * (n + 1)
3 * n * n + n
+1 for level zero!
*/
