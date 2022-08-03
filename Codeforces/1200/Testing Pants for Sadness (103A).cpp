#include <bits/stdc++.h>

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

bool sortReversed(int &a, int &b){
	return a - b > 0;
}

int main(){
	ll n, counter = 0, sum = 0;
	cin >> n;
	vector <ll> v;
	for(ll i = 0;i < n; ++i){
		ll x;
		cin >> x;
		// sum += x;
		v.pb(x);
	} 
	// if(n == 1) {
	// 	cout << v[0] << endl;
	// 	return 0;
	// }
	// if(sum == n){
	// 	cout << sum << endl;
	// 	return 0;
	// }
	for(ll i = 0;i < n; ++i){
		counter += (i + 1) * v[i] - i;
		// while(v[i] > 1){
		// 	v[i] --;
		// 	for(ll j = i - 1; j >= 0 ; --j){
		// 		counter += v[j];
		// 	}
		// }
		
	}
	cout << counter << endl;
	return 0; 
}
	