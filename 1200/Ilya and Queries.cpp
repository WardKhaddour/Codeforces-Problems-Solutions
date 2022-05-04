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
	int m, counter = 0;
	string s;
	cin >> s;
	vector<int> v(1e5 + 5);
	for(int i = 1;i < s.size(); ++i){
		if(s[i] == s[i - 1]){
			counter ++;
		}
		v[i] = counter;
	}
	cin >> m;

	while (m--){
		int l, r;
		cin >> l >> r;
		cout << v[r - 1] - v[l - 1] << endl;
	}

	return 0;
}