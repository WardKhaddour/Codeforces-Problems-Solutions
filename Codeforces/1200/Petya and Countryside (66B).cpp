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
	int n;
	cin >> n;
	if(n == 1) {
		cout << 1 << endl;
		return 0;
	}
	vector <int> v;
	vector <int> ve;
	for(int i = 0;i < n; ++i){
		int x;
		cin >> x;
		v.pb(x);
	} 
	for(int i = 0;i < n; ++i){
		ve.pb(1);
		int k = i;
		for(int j = i - 1;j >= 0; --j){
			if(v[j] <= v[k]){
				ve[i]++;
			}
			else break;
			k--;
		}
		k = i;
		for(int j = i + 1;j < n; ++j){
			if(v[j] <= v[k]){
				ve[i]++;
			}
			else break;
			k++;
		}
	}
	int mx = ve[0];
	for(auto i : ve){
		if(i > mx){
			mx = i;
		}
	}
	cout << mx << endl;
	return 0; 
}
	