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
    string s, t;
    cin>>s>>t;
    int n=s.size(), m=t.size();
    int i=0, j=0;
    while(i<n and j<m)
    {
        if(t[j]==s[i] or s[i]=='?') s[i]=t[j], i++, j++;
        else i++;
    }
    if(j<m)
    {
        no;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]=='?') s[i]='a';
    }
    yes;
    cout<<s<<endl;
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

