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

const int N = 1e5 + 5;

int32_t main(){
	fastIO();
	int n;
	cin >> n;
	vector<int> v(n), sortedV(n), indexes;

	for(int i = 0;i < n; ++i){
		cin >> v[i];
		sortedV[i] = v[i];
	}


	sort(sortedV.begin(), sortedV.end());

	for(int i = 0;i < n; ++i){
		if(v[i] != sortedV[i]){
			indexes.push_back(i);
		}

	}
	if(indexes.size() == 0){
		cout << "yes" << endl;
		cout << 1 << " " << 1 << endl;
		return 0;
	}

	for(int i = indexes[0], j = indexes[indexes.size() - 1]; i < j; i++, j--){
		swap(v[i], v[j]);
	}


	for(int i = 0;i < n; ++i){
		if(v[i] != sortedV[i]){
			cout << "no" << endl;
			return 0;
		}
	}

	cout << "yes" << endl;

	cout << indexes[0] + 1 << " " << indexes[indexes.size() - 1] + 1 << endl;
	return 0;
}
