#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        mp[w]++;
    }
    int ans = 0;

    for (int i = 2; i <= 2 * n; i++)
    {
        map<int, int> temp = mp;
        int teams = 0;

        for (auto [val, occ] : mp)
        {
            if (temp[val] == 0)
                continue;

            int x = i - val;

            if (x == val)
            {
                teams += temp[val] / 2;
                temp[val] = 0;
            }
            else if (temp.count(x) && temp[x] > 0)
            {
                int pair = min(temp[val], temp[x]);
                teams += pair;
                temp[val] = 0;
                temp[x] = 0;
            }
        }
        ans = max(ans, teams);
    }

    cout << ans << "\n";
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