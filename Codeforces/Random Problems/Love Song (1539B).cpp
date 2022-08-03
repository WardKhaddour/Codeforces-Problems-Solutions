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
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

const int N = 1e5 + 5;
const int P = 1e9 + 7;

const int dx4[] = {1, 0, 0, -1};
const int dy4[] = {0, 1, -1, 0};

const int dx8[] = {1, 0, 0, -1, -1, 1, -1, 1};
const int dy8[] = {0, 1, -1, 0, -1, 1, 1, -1};

const int diagonalX[] = {-1, 1, -1, 1};
const int diagonalY[] = {-1, 1, 1, -1};

void solve()
{
    int n, q;
    string s;
    cin >> n >> q >> s;
    int preSum[sz(s) + 1];
    preSum[0] = 0;
    int l = 0;
    for (auto i : s)
    {
        preSum[++l] = preSum[l] + i - 96;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << preSum[r] - preSum[l - 1] << ln;
    }
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
