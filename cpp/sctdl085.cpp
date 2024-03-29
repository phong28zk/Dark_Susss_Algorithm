#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (int i = 1; i <= int(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 1005
const double pi=3.14159265358979323846;
const int MOD = 1000000007;

string bin_st(string s)
{
    string res = "";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if(s[i]!='0'&&s[i]!='1')
        {
            for(int j = i; j < n; j++)
            {
                res += '1';
            }
            break;
        }
        else
        {
            res += s[i];
        }
    }
    return res;
}

ll bin2dec(string s)
{
    ll res = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        res += (s[i] - '0') * pow(2, n - i - 1);
    }
    return res;
}

void solve()
{
    string s; cin >> s;
    // cout << s << endl;
    s = bin_st(s);
    // cout << s << endl;
    ll res = bin2dec(s);
    cout << res << endl;

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