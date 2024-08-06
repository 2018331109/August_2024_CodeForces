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

int calculate_wins(int a1, int a2, int b1, int b2)
{
    int suneetWins = 0;


    vector<pair<int, int>> sun = {{a1, a2}, {a1, a2}, {a2, a1}, {a2, a1}};
    vector<pair<int, int>> slavicCards = {{b1, b2}, {b2, b1}, {b1, b2}, {b2, b1}};

    for (int i = 0; i < 4; i++)
    {
        int suneetScore = 0, slavic = 0;
        if (sun[i].first > slavicCards[i].first) suneetScore++;
        else if (sun[i].first < slavicCards[i].first) slavic++;

        if (sun[i].second > slavicCards[i].second) suneetScore++;
        else if (sun[i].second < slavicCards[i].second) slavic++;

        if (suneetScore > slavic) suneetWins++;
    }

    return suneetWins;
}
void solve()
{
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    cout << calculate_wins(a1, a2, b1, b2) << endl;
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

