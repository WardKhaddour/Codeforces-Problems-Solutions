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
#define sort2(v) sort(v.rbegin(), v.rend())
#define reverse1(v) reverse(v.begin(), v.end())
#define rep(n) for(int i = 0;i < n; ++i)
#define rep1(i, n) for(int j = i;j <= n; ++j)

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

const int N = 1e5 + 5;
const int P = 1e9 + 7;

const int dx4[] = {1, 0, 0, -1};
const int dy4[] = {0, 1, -1 ,0};

const int dx8[] = {1, 0, 0, -1, -1, 1, -1, 1};
const int dy8[] = {0, 1, -1 ,0, -1, 1, 1, -1};

const int daigonalx[] = {-1, 1, -1, 1};
const int daigonaly[] = {-1, 1, 1, -1};

vector<int> gr[N];
bool vis[N] = {0};
bool cats[N] = {0};

int n, m;

int ans = 0;

void dfs(int node,int par, int prevW){
  bool ok = true;
  if(prevW > m)
    return;
  for(auto x : gr[node]){
    if(x != par){
      ok = false;
      dfs(x, node, prevW * cats[x] + cats[x]);
    }
  }
  ans += ok;
}


int main(){
  fastIO;
  cin >> n >> m;
  for(int i = 1;i <= n; ++i){
    cin >> cats[i];
  }

  for(int i = 0;i < n - 1; ++i){
    int u, v;
    cin >> u >> v;
    gr[u].push_back(v);
    gr[v].push_back(u);
  }
  dfs(1, -1, cats[1]);
  cout << ans << endl;
  return 0;
}