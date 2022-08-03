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

bool sortReversed(pair<int, double> a, pair<int, double> b){
	if(a.second == b.second)	
		return b.first - a.first > 0;
	return a.second - b.second > 0;
}

int main(){
	double n, t1, t2 ,k;
	cin >> n >> t1 >> t2 >> k;
	vector <pair<int,double>> res;
	for(int i = 0;i < n; ++i){
		double v, u;
		cin >> v >> u;
		double a = u * t1 - (u * t1 * k / 100) + v * t2;
		double b = v * t1 - (v * t1 * k / 100) + u * t2;
		res.push_back(make_pair(i + 1,max(a, b)));
	}
	sort(res.begin(), res.end(),sortReversed);
	for(int i = 0;i < res.size(); ++i){
		printf("%d %.2f\n",res[i].first, res[i].second );
	}

	return 0;
}