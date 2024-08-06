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
    int l, r;
    cin>>l>>r;
    int ans=0;
    int it=3, pre=1, last=0, cnt=1;
    while(it<r)
    {
        if(it>=l)
        {
            pre=max(l, it/3);
            ans+=cnt*(it-pre);
        }
        it*=3;
        cnt++;
    }
    //cout<<ans<<endl;
    int mx=min(r, it);
    int mn=max(l, it/3);
    ans+=cnt*(mx-mn+1);
    if(it==r) ans+=1;
    while(l>0){
        ans++;
        l/=3;
    }
    cout<<ans<<endl;
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

