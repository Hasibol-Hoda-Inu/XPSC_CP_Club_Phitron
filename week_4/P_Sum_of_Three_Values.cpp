#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ll x;
    cin >> n >> x;

    vector<pair<int, int>> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin()++, v.end());

    for (int i = 1; i < n - 1; i++)
    {
        int l = i+1;
        int r = n;

        ll dif = x - v[i].first;

        while (l < r)
        {
            ll sum = v[l].first + v[r].first;

            if (sum == dif)
            {
                set<int> s;
                s.insert(v[l].second);
                s.insert(v[r].second);
                s.insert(v[i].second);
                for (auto ans : s)
                    cout << ans << " ";
                return 0;
            }
            else if (sum < dif)
                l++;
            else
                r--;
        }
    }

    cout << "IMPOSSIBLE" << "\n";

    return 0;
}