#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;

        for (int i = 1; i <= n; i++)
        {
            int a;
            cin >> a;
            mp[a].insert(i);
        }

        for (int i = 1; i <= m; i++)
        {
            int l, r;
            cin >> l >> r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
                cout << "NO\n";
            else
            {
                int li, ri;
                li = *mp[l].begin();
                ri = *mp[r].rbegin();
                if (li < ri)
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
        }
    }

    return 0;
}