#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

#define ln "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define dbg cout << "HERE!!!" << endl
#define sort1(v) sort(v.begin(), v.end())
#define sort2(v) sort(v.rbegin(), v.rend())
#define reverse1(v) reverse(v.begin(), v.end())
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rep1(i, s, n) for (int i = s; i <= n; ++i)
#define sz(x) ((int)(x).size())
#define clr(arr, n) memset(arr, n, sizeof(arr))
#define MAX(a, b, c) max(a, max(b, c))
#define cinVec(v, n)            \
    for (int i = 0; i < n; ++i) \
    cin >> v[i]
#define bug(...) __f(#__VA_ARGS__, __VA_ARGS__)

#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
    const char *comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " : " << arg1 << " | ";
    __f(comma + 1, args...);
}

const int N = 1e5 + 5;
const int P = 1e9 + 7;
const int OO = INT_MAX;

const int dx4[] = {1, 0, 0, -1};
const int dy4[] = {0, 1, -1, 0};

const int dx8[] = {1, 0, 0, -1, -1, 1, -1, 1};
const int dy8[] = {0, 1, -1, 0, -1, 1, 1, -1};

const int diagonalX[] = {-1, 1, -1, 1};
const int diagonalY[] = {-1, 1, 1, -1};

vector<int> gr[N];
bool visited[N] = {false};
int dp[N][3];
void solve()
{
    int n;
    cin >> n;
    vector<vi> v;
    for (int i = 0; i < n; ++i)
    {
        vi V;
        int a, b, c;
        cin >> a >> b >> c;
        V.pb(a);
        V.pb(b);
        V.pb(c);
        v.pb(V);
    }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < 3; ++j)
            dp[i][j] = -1;

    dp[0][0] = v[0][0];
    dp[0][1] = v[0][1];
    dp[0][2] = v[0][2];
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < 3; ++j)
        {
            int j1, j2;
            if (j == 0)
            {
                j1 = 1;
                j2 = 2;
            }
            else if (j == 1)
            {
                j1 = 0;
                j2 = 2;
            }
            else
            {
                j1 = 0;
                j2 = 1;
            }
            dp[i][j] = max(dp[i - 1][j1], dp[i - 1][j2]) + v[i][j];
        }
    cout << MAX(dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]) << endl;
}

int main()
{
    fastIO;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        solve();
    }
    return 0;
}