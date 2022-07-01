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
				ans *= (c + 1); 
			}
		}
	}
	return ans;
	
}

int main(){
	fastIO();
	primeSieve();
	ll a, b, c, sum = 0;
	cin >> a >> b >> c;
	ll i = 1, j = 1, k = 1;
	for(ll i = 1;i <= a; ++i){
		for(ll j = 1;j <= b; ++j){
			for(ll k = 1;k <= c; ++k){

				ll n = i * j * k;

				sum += divisors(n) % P;
			}
		}
	}

	cout << sum % P;
	return 0;
}
