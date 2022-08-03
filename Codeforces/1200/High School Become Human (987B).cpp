#include <bits/stdc++.h>
#include <ctime>
#define int long long int
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
	//fastscan();
	double x, y;
	scanf("%lf %lf", &x, &y);

	if(x == y){
		printf("=\n");

		return 0;
	}
	double a = x * log(y);
	double b = y * log(x);

	if(a == b) {
		printf("=\n");

		return 0;
	}
	if(a > b){
		printf("<\n");
		return 0;
	}

	printf(">\n");
	return 0;
}
