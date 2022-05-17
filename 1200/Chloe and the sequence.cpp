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


int findEl(ll begin, ll end, ll el, int &c){
	ll mid = (begin + end - 1) / 2 + 1;
	if(el == mid){
		return c;
	}
	if(el < mid){
		c--;
		return findEl(begin, mid - 1,el ,c);
	}
	else {
		c--;
		return findEl(mid + 1,end ,el ,c);
	}
	return -1;
}

int32_t main(){
	fastscan();
	int n;
	ll k;
	scanf("%d %lli", &n, &k);
	int c = n;
	ll size = pow(2, n) - 1;


	printf("%d", findEl(1, size, k, c));

	return 0;
}
