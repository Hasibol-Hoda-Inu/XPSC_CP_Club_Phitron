#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, idx = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ms;
    vector<int> v;

    for (int i = 1; i <= n; i++)
    {
        int t, m;
        cin >> t;
        if (t == 1)
        {
            cin >> m;
            s.insert({idx, m});
            ms.insert({m, -idx});
            idx++;
        }
        else if (t == 2)
        {
            int pos = s.begin()->first;
            int money = s.begin()->second;
            v.push_back(pos);
            s.erase(s.begin());
            ms.erase({money, -pos});
        }
        else if (t == 3)
        {
            int pos = -ms.rbegin()->second;
            int money = ms.rbegin()->first;
            v.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos, money});
        }
    }

    for(int val : v)
        cout << val << " ";

    return 0;
}