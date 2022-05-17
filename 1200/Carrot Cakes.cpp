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
	int n, t, k ,d;
	scanf("%d %d %d %d",&n, &t, &k, &d);
	int x = (n + k - 1) / k;
	
	int c1 = 0, c2 = d;

	for(int i = 0;i < x; ++i){
		if(c1 <= c2) c1 += t;
		else c2 += t;
	}

	if(max(c1, c2) < x * t){
		printf("YES\n");
		return 0;
	}

	printf("NO\n");
	return 0;
}
