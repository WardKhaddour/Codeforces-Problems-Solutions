#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
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
	fastread();
	string s;
	cin >> s;
	string S = s;
	sort(s.begin(),s.end());
	if(s != S){
		cout << "NO" << endl;
		return 0;
	}
	int aCount = 0, bCount = 0, cCount = 0;
	for(int i = 0;i < s.length(); ++i){
		if(s[i] == 'a') aCount ++;
		else if(s[i] == 'b') bCount ++;
		else if(s[i] == 'c') cCount ++;
	}

	if(aCount == 0 || bCount == 0){
		cout << "NO" << endl;
		return 0;
	}
	if(cCount == aCount || cCount == bCount){
		cout << "YES" << endl;
		return 0;
	}

	cout << "NO" << endl;
	return 0;
}