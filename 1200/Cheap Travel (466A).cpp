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
	int n, m, a, b;

	cin >> n >> m >> a >> b;
	if (m * a < b) {
		cout << n * a << endl;
	}

	else {
		cout << (n / m) * b + min((n % m) * a, b) << endl;
	}
	return 0;
}
