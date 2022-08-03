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
#define coutVec(v, n) for(auto i : v){cout << i << " ";} cout << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.begin(), v.end(), reversed)
#define reverse1(v) reverse(v.begin(), v.end()) 
#define rep(n) for(int i = 0;i < n; ++i)
#define rep1(i, n) for(int j = i;j < n; ++j)

#define fastIO() {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}

using namespace std;

const int N = 1e5 + 5;

int n, m;

char a[105][105];
bool vis[105][105];

int dx[] = {1, 0, 0, -1};
int dy[] = {0, 1, -1, 0};

bool isValidCell(int i, int j){
	return i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '-';
}

void fillBoard(int posi, int posj){
	if(vis[posi][posj] || !isValidCell(posi, posj)){

		return;
	}
	vis[posi][posj] = true;
	int b = 0, w = 0;
	for(int k = 0;k < 4; ++k){
		if(!isValidCell(posi + dx[k], posj + dy[k])){
			continue;
		}
		if(a[posi + dx[k]][posj + dy[k]] == 'B'){
			b++;
		}
		else if(a[posi + dx[k]][posj + dy[k]] == 'W'){
			w++;
		}
	}
	if(w > 0 && b == 0){
		a[posi][posj] = 'B';
	}
	else if (w == 0 && b > 0){
		a[posi][posj] = 'W';
	}
	else if(w == 0 && b == 0){
		a[posi][posj] = 'W';
	}
	for(int k = 0;k < 4; ++k){

		fillBoard(posi + dx[k], posj + dy[k]);
	}

}

int main(){
	fastIO();
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<pair<int,int>> q;
		for(int i = 0;i < n; ++i){
			int s, e;
			cin >> s >> e;
			q.push({s, e});

		}
		auto std = q.front();
		int sec = std.first;
		while(q.size()){
			std = q.front();
			int s = std.first;
			int e = std.second;
			q.pop();
			if(s > sec) sec = s;
			if(e < sec){
				cout << 0 << " ";
			}
			else {
				cout << sec << " ";
				sec++;
			}
		 	
			
		}

		cout << endl;
	}
	return 0;
}
