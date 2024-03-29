#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);                  \
    cerr.tie(0)
typedef long long ll;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define forn(i, a, b) for (ll i = a; i < b; i++)
#define forr(i, a, b) for (ll i = a; i >= b; i--)
#define fora(i, n) for (auto i : n)
#define Len 1005
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;
vector<vector<int>> dp(Len, vector<int>(Len));
void solve()
{
    int n, m; cin >> n >> m;
    vector<vector<int>> a(Len, vector<int>(Len));
    for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin >> a[i][j];
    for(int i=1; i<=m; i++) dp[1][i] = a[1][i];
    for(int i=1; i<=n; i++)
    {
        dp[i][0] = -1;
        dp[i][m+1] = -1;
    }
    int ans = 0;
    for(int i=2; i<=n; i++) 
    {
        for(int j=1; j<=m; j++) 
        {
            dp[i][j] = max(dp[i-1][j], max(dp[i-1][j-1], dp[i-1][j+1])) + a[i][j];
        }
    }
    // for(int i=0; i<=n; i++)
    // {
    //     for(int j=0; j<=m; j++) cout << dp[i][j] << " ";
    //     cout << endl;
    // }
    for(int i=1; i<=m; i++) ans = max(ans, dp[n][i]);
    cout << ans << endl;
}

int main()
{
    FAST_IO;
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    // solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
