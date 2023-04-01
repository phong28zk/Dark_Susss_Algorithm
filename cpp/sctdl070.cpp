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
#define Len 100005
const double pi = 3.14159265358979323846;
const int MOD = 1000000007;
int dp[1005][1005];
void solve()
{
        int s, n;
        cin >> s >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)cin >> a[i];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= s; j++)
                if (a[i] <= j) dp[i][j] = max(dp[i - 1][j - a[i]] + a[i], dp[i - 1][j]);
                else dp[i][j] = dp[i - 1][j];
        cout << dp[n][s] << endl;
        for(int i=0; i<=n; i++)
            for(int j=0; j<=s; j++)
                dp[i][j]=0;
}
int main()
{
    FAST_IO;
    //freopen("input.txt","r", stdin);
    //freopen("output.txt","w", stdout);
    int t;
    cin >>t;
    while(t--){
        solve();
    }
   
}
