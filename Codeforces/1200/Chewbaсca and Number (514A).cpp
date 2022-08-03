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
	string x;
	cin >> x;
	int i;
	if(x[0] == '9'){
		cout << x[0];
		i = 1;
	}
	else i = 0;
	for(i;i < x.length(); ++i){
		if((9 - (x[i] - '0')) < (x[i] - '0')){
			cout << (9 - (x[i] - '0'));
		}
		else cout << (x[i] - '0');
	}

	return 0;
}
