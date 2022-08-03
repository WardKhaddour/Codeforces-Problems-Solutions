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

const int N = 1e5 + 5;

const	int dx4[] = {1, 0, 0, -1};
const	int dy4[] = {0, 1, -1 ,0};

const	int dx8[] = {1, 0, 0, -1, -1, 1, -1, 1};
const	int dy8[] = {0, 1, -1 ,0, -1, 1, 1, -1};

vector<int> gr[N];
bool vis[N] = {0};





int main(){
	fastIO();
	string s1, s2; 
	cin >> s1 >> s2;
	int n = s1.length();
	for(int i = 0; i < n; ++i){
		if(tolower(s1[i]) == tolower(s2[i])){
			continue;
		}
		if(tolower(s1[i]) - '0' < tolower(s2[i]) - '0'){
			cout << -1 << endl;
			return 0;
		}
		if(tolower(s1[i]) - '0' > tolower(s2[i]) - '0'){
			cout << 1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}
