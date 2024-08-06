#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 1e5 + 5;
const int INF = 1e18;
int md = 998244353;

void solve()
{
    int n, s, len, f=0, last=0;
    cin>>n>>s>>len;
    for(int i=0; i<n; i++)
    {
        int a, b;
        cin>>a>>b;
        if(a-last>=s) f=1;
        last=b;
    }
    if(len-last>=s) f=1;
    if(f) yes;
    else no;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;
    for (int tc = 0; tc < test; ++tc)
    {
        solve();
    }

    return 0;
}

