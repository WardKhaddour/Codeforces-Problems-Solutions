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
	int n;
	cin >> n;
	set <int> s;
	for(int i = 0;i < n;++i){
		int x;
		cin >> x;
		s.insert(x);
	}
	if(s.size() == 1 || s.size() == 2){
		cout << "YES" << endl;
		return 0;
	}

	if(s.size() == 3){
		vector <int> v;
		for(auto i : s){
			v.pb(i);
		} 
		if((v[2] + v[0])  == (2 * v[1])){
			cout << "YES" << endl;
			return 0;
		}
	}


	cout << "NO" << endl;
	return 0;
}