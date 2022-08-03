#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#define ull unsigned long long int
#define F first
#define S second
#define pb push_back
#define pi pair<int,int>
#define mp make_pair
#define endl "\n"
#define vi vector<int>
#define dbg cout << "HERE!!!" << endl
#define cinVec(v, n) for(int i = 0;i < n; ++i) cin >> v[i]
#define coutVec(v) for(auto i : v){cout << i << " ";} cout << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define rep1(i, n) for(int j = i;j < n; ++j)

#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

using namespace std;

const int N = 1e6 + 5;
const int P = 1073741824;

const	int dx4[] = {1, 0, 0, -1};
const	int dy4[] = {0, 1, -1 ,0};

const	int dx8[] = {1, 0, 0, -1, -1, 1, -1, 1};
const	int dy8[] = {0, 1, -1 ,0, -1, 1, 1, -1};

vector<int> gr[N];
bool vis[N] = {0};

vector<bool> sieve(N, 1);

void primeSieve(){
	sieve[0] = sieve[1] = 0;
	
	for(ll i = 2 ;i * i <= N; ++i){
		if(sieve[i]){
			for(ll j = i * i; j <= N; j += i){
				sieve[j] = 0;
			}
		}
	}
}

ll divisors(ll num){
	int ans = 1;
	for(int i = 2; i <= num ; ++i){
		if(sieve[i]){
			int c = 0;
			if(num % i == 0){
				while(num % i == 0){
					num /= i;
					c++;
				}
				cout << "c = " << c << ", i = " << i << ", ans = " << ans << endl;
				ans *= (c + 1); 
			}
		}
	}
	return ans;
	
}

int main(){
	fastIO();
	int t;
	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		vector<int> v(n);
		vector<int> preSum(n);
		for(int i = 0;i < n; ++i){
			cin >> v[i];
		}
		sort(v.rbegin(), v.rend());
		preSum[0] = v[0];
		for(int i = 1;i < n; ++i){
			preSum[i] = preSum[i - 1] + v[i];
		}
		while(q--){
			int x, ans = 0;
			bool ok = true;
			cin >> x;
			if(x > preSum[n - 1]){
				ok = false;
			}
			int s = 0, e = n - 1;
			while(s <= e && ok){
				int mid = (s + e + 1) / 2;
				if(x > preSum[mid]){
					s = mid + 1;
				}
				else if(x <= preSum[mid] && mid == 0){
					cout << mid + 1 << endl;
					break;
				}
				else if(x <= preSum[mid] && x > preSum[mid - 1]){
					cout << mid + 1 << endl;
					break;
				}
				else{
					e = mid - 1;
				}
			}
			if(!ok){
				cout << -1 << endl;
			}
		}
	}
	return 0;
}
