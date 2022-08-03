#include <bits/stdc++.h>
#include <ctime>
#define int long long int
#define F first
#define S second
#define pb push_back
#define pi pair<int,int>
#define mp make_pair
#define endl "\n"
#define vi vector<int> 
#define dbg cout << "HERE!!!" << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}


using namespace std;


int32_t main(){
	fastIO();
	int n, s1 = 0, s2 = 0;
	bool turn = true;
	cin >> n;
	vector<int> v(n);

	for(int i = 0;i < n; ++i){
		cin >> v[i];
	}


	int i = 0, j = n - 1;

	while(i <= j){
		if(v[i] < v[j]){
			if(turn){
				s1 += v[j];
			}
			else{
				s2 += v[j];
			}
			j--;
		}
		else {
			if(turn){
				s1 += v[i];
			}
			else{
				s2 += v[i];
			}
			i++;
		}
		turn = !turn;

	}

	cout << s1 << " " << s2 << endl;
	return 0;
}
