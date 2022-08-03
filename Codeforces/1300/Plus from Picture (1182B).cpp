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
	int w, h, sameRow, sameCol = 0, moreThan1Row = 0, count = 0, longRBegin = -1, longREnd = -1, longRIndex = -1;
	bool rEdgStar = false, cEdgStar = false, noRowSpaces = true, noColSpaces = true;
	cin >> w >> h;
	char a[505][505];
	map <int, vector<int>> stars;
	for(int i = 0;i < w; ++i){
		for(int j = 0;j < h; ++j){
			cin >> a[i][j];
			if(a[i][j] == '*'){
				stars[i + 1].push_back(j + 1);
			}
		}
	}
	for(auto i : stars)
		if(i.second.size() > 1){
			if(i.first == 1 || i.first == w){
				cEdgStar = true;
			}
			moreThan1Row++;
		}

	for(auto i : stars)
		if(i.second.size() > 1){
			int startStar = i.second[0];
			longRBegin = i.second[0];
			longREnd = i.second[i.second.size() - 1];
			longRIndex = i.first;
			for(int j = 1;j < i.second.size(); ++j){
				if(i.second[j] != startStar + 1){
					noRowSpaces = false;
				}
				startStar++;
			}
		}
	
	auto it = stars.begin();
	if(it != stars.end()){
		sameCol = it->first;	
		sameRow = it->second[0];
	}
	if(sameRow == 1 || sameRow == h){
		rEdgStar = true;
	}

	for(auto i : stars)
		if(find(i.second.begin(), i.second.end(), sameRow) != i.second.end())
			count++;
	
	if(it != stars.end())
		it++;
	for(it; it != stars.end(); it++){
		if(it->first != sameCol + 1){
			noColSpaces = false;
		}
		sameCol = it->first;
	}

	if(stars.size() >= 3 && 
		noRowSpaces && 
		!rEdgStar &&
		!cEdgStar &&
		moreThan1Row == 1 &&
		count == stars.size() &&
		sameRow != longREnd &&
		sameRow != longRBegin &&
		noColSpaces &&
		longRIndex != stars.begin() -> first &&
		longRIndex != stars.end() -> first){


			cout << "YES" << endl;
			return 0;
	}
	cout << "NO" << endl;
	return 0;
}
