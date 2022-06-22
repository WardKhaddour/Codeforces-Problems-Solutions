#include <bits/stdc++.h>
#include <ctime>
#define ll long long int
#define F first
#define S second
#define pb push_back
#define pi pair<int,int>
#define mp make_pair
#define endl "\n"
#define vi vector<int>
#define dbg cout << "HERE!!!" << endl
#define cinVec(v, n) for(int i = 0;i < n; ++i) cin >> v[i]
#define coutVec(v, n) for(auto i : v){cout << i << " ";} cout << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define rep1(i, n) for(int j = i;j < n; ++j)

#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

using namespace std;

const int N = 1e7;
void primeSieve(vector <int> &sieve){
	sieve[1] = sieve[0] = 0;
	for(ll i = 3;i <= N; i += 2){
		sieve[i] = 1;
	}
	for(ll i = 3;i <= N; ++i){
		if(sieve[i]){
			for(ll j = i * i; j <= N; j += i){
				sieve[j] = 0;
			}

		}
	}
	
}	


int main(){
	fastIO();
	vector <int> sieve (N, 0);
	primeSieve(sieve);

	int n;
	cin >> n;

	int i = 0, sum = 0;
	while(sum < n){
		if(sieve[i]){
			cout << i << " ";
			sum++;

		}
		i++;
	}

	cout << endl;
	return 0;

}
