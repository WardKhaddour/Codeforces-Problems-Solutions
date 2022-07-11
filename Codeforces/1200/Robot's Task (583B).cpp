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
 
int32_t main(){
	fastscan();
	int n;
	cin >> n;
	vector<int> v(n);
	vector<bool> visited(n);
	for(int i = 0;i < n; ++i){
		cin >> v[i];
	}
	bool dirForward = true;
	int counter(0), chngDir(0);

	while(counter < n){
		if(dirForward){
			for(int i = 0;i < n; ++i){
				if(!visited[i] && v[i] <= counter){
					visited[i] = true;
					counter++;
				}
			}
			if(counter != n){
				dirForward = false;
				chngDir++;
			}
		}
		else{
			for(int i = n - 1; i >= 0; --i){
				if(!visited[i] && v[i] <= counter){
					visited[i] = true;
					counter++;
				}
			}
			if(counter != n){
				dirForward = true;
				chngDir++;
			}
		}
	}


	cout << chngDir << endl;
	
	return 0;
}
