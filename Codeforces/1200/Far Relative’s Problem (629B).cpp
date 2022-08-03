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
	//fastscan();
	int n;
	scanf("%d",&n);
	vector<int> daysM(367);
	vector<int> daysF(367);
	while(n--){
		char gender;
		int a, b;
		scanf(" %c %d %d", &gender, &a, &b);
		if(gender == 'F')
			for(int i = a;i <= b; ++i)
				daysF[i]++;

		else
			for(int i = a;i <= b; ++i)
				daysM[i]++;
	}
	int ans = 0;
	for(int i = 1;i <= 366; ++i){
		if(ans < min(daysM[i], daysF[i])){
			ans = min(daysM[i], daysF[i]);
		}
	}

	printf("%d\n", 2 * ans);
	return 0;
}
