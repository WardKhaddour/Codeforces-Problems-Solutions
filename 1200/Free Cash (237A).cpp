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
	int n, mx = 1;
	cin >> n;
	map <pair<int,int>, int> M;
	while(n--){
		int h, m;
		cin >> h >> m;
		M[make_pair(h, m)]++;
	}
	for(auto i : M){
		if(i.second > mx){
			mx = i.second;
		}
	}

	cout << mx << endl;
	return 0;
}