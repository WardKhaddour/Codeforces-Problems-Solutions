#include <bits/stdc++.h>
#include <ctime>
#define int long long int
#define F first
#define S second
#define pb push_back
#define pi pair<int,int>
#define mp make_pair 
#define endl "\n"
#define dbg cout << "HERE!!!" << endl
#define rep(n) for(int i = 0;i < n; ++i)
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
 
bool comparePair(pi p1, pi p2){
	if(p1.F > p2.F) return true;
	if(p1.F == p2.F && p1.S < p2.S) return true;
	return false;
}

bool reversed(int a, int b){
	return a - b > 0;
}
 
void solve(){}
int32_t main(){
	fastscan();
	int c1, c2, c3, c4;
	cin >> c1 >> c2 >> c3 >> c4;
	int n, m;
	int busCost(0), trollyCost(0);
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0;i < n; ++i){
		cin >> a[i];
		busCost += a[i];
	}

	for(int i = 0;i < m; ++i){
		cin >> b[i];
		trollyCost += b[i];
	}

	if(busCost == 0 && trollyCost == 0){
		cout << 0 << endl;
		return 0;
	}
	
	if(busCost > 0){
		int count = 0;
		for(int i = 0;i < n; ++i){
			count += min (c1 * a[i], c2);
		}
		busCost = count;
	}


  if(trollyCost > 1){
    int count=0;
    for(int i = 0;i < m ;i++){

        count += min(c1 * b[i],c2);

    	}
    	trollyCost = count;
		}

    busCost = min(busCost, c3);
    trollyCost = min(trollyCost, c3);
    cout << min (busCost + trollyCost, c4);
    

	return 0;
}
