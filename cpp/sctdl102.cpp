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


void solve()
{
    int n; cin >> n;
    vector<vector<ll>> adj(n+5, vector<ll>(n+5, 0));
    map<int, list<int>> mp;
    for(int i=1; i<=n; i++)
    {
        for(int j=1 ;j<=n; j++)
        {
            cin >> adj[i][j];
        }
    }

    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n;j++) 
    //         cout << adj[i][j] << " ";
    //     cout << endl;
    // }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(adj[i][j]==1)
            {
                mp[i].pb(j);
            }
        }
    }

    for(auto i: mp)
    {
        cout << i.first << ": ";
        fora(j, i.second)
            cout << j << " ";
        cout << endl;
    }


}
int main()
{
    FAST_IO;
    // int tt; cin >> tt; while (tt--) solve();
    solve();
    // freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
}
