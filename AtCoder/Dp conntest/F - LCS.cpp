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

string s, t, ans = "";
int a[3001][3001];
int LCS(int i, int j)
{
    if (i == sz(s) || j == sz(t))
        return 0;
    if (a[i][j] != -1)
        return a[i][j];
    if (s[i] == t[j])
    {
        return a[i][j] = 1 + LCS(i + 1, j + 1);
    }
    return a[i][j] = max(LCS(i + 1, j), LCS(i, j + 1));
}
void traceBack(int i, int j)
{
    if (i == sz(s) || j == sz(t))
        return;
    if (s[i] == t[j])
    {
        ans += s[i];
        traceBack(i + 1, j + 1);
    }
    else
    {
        if (LCS(i + 1, j) == LCS(i, j))
            traceBack(i + 1, j);
        else
            traceBack(i, j + 1);
    }
}
void solve()
{
    cin >> s >> t;
    for (int i = 0; i < 3001; ++i)

        for (int j = 0; j < 3001; ++j)
            a[i][j] = -1;

    LCS(0, 0);
    traceBack(0, 0);
    // reverse(ans.begin(), ans.end());
    cout << ans << ln;
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