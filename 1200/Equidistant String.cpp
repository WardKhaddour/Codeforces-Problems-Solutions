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
	string s, t;
	cin >> s >> t;
	int n = s.length();
	string p = "";
	bool isS = true;
	int counter = 0;
	for(int i = 0;i < n; ++i){
		if(s[i] == t[i]){
			p += s[i];
		}
		else{
			counter ++;
			p += isS? s[i] : t[i];
			isS = !isS;
		}
	}
	if(counter % 2 == 0)
		cout << p << "\n";
	else
		cout << "impossible\n";
	return 0;
}