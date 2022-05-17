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
	int n;
	scanf("%d", &n);
	vector<int> v(n);
	vector<int> ans(n);
	for(int i = 0;i < n; ++i)
		scanf("%d", &v[i]);

	sort(v.begin(), v.end());
	int mid = n / 2;
	ans[mid] = v[n - 1];
	bool toLeft = false;
	int c = 1;

	for(int i = n - 2;i >= 0; --i){
		if(c + mid > n - 1 || mid - c < 0) break;
		if(toLeft){
			ans[mid - c] = v[i]; 
			c++;
		}
		else{

			ans[mid + c] = v[i];
		}
		toLeft = !toLeft;
	}
	if(n % 2 == 0){
		ans[0] = v[0];
	}
	for(auto i : ans){
		printf("%d ", i);
	}
	return 0;
}
