#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<ll, ll> fre;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        fre[a]++;
    }

    ll sets = 0;
    ll i = -2;
    ll k = 0;

    for (auto [val, cnt] : fre)
    {
        if (val != i + 1)
            sets += cnt;
        else
        {
            if (cnt > k)
                sets += (cnt - k);
        }

        i = val;
        k = cnt;
    }

    cout << sets << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}