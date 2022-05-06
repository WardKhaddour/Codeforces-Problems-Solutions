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
	

int32_t main(){
	int n;
	cin >> n;
	vector<int> v1(n);
	vector<int> v2(n);
	vector<int> v3(n);

	for(int i = 0;i < n; ++i){
		cin >> v1[i];
	}
	for(int i = 0;i < n - 1; ++i){
		cin >> v2[i];
	}
	v2[n - 1] = 1e9 + 5;
	for(int i = 0;i < n - 2; ++i){
		cin >> v3[i];
	}

	v3[n - 1] = 1e9 + 5;
	v3[n - 2] = 1e9 + 5;
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	sort(v3.begin(),v3.end());
	for(int i = 0;i < n; ++i){
		if(v1[i] != v2[i]){
			cout << v1[i] << endl;
			break;
		}
	}
	for(int i = 0;i < n; ++i){
		if(v2[i] != v3[i]){
			cout << v2[i] << endl;
			break;
		}
	}
	return 0;
}
