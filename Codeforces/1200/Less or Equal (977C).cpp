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
	//fastscan();
	int n ,k, c(0);
	scanf("%d %d", &n, &k);

	vector<ll> v(n);

	for(int i = 0;i < n; ++i)
		scanf("%lli", &v[i]);
	sort(v.begin(), v.end());

	if(k == 0 && v[0] > 1){
		printf("1\n");
		return 0;
	}
	if(k == 0 && v[0] == 1){
		printf("-1\n");
		return 0;
	}
	ll x = v[k - 1];

	for(int i = 0;i < n; ++i){
		if(v[i] <= x) c++;
	}
	if(c != k) {
		printf("-1\n");
		return 0;
	}

	printf("%d\n", x);
	return 0;
}
