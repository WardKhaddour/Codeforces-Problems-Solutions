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
	int n, sevenCounter (0), fourCounter (0);
	cin >> n;
	int m = n;
	while(n > 0){
		if(n % 7 == 0){
			n -= 7;
			sevenCounter ++;
		}
		else{
			n -= 4;
			fourCounter++;
		}
	}

	if(fourCounter * 4 + sevenCounter * 7 == m){
		while(fourCounter--) cout << 4;
		while(sevenCounter--) cout << 7;
		return 0;
	}
	cout << -1 << endl;

	return 0;
}
