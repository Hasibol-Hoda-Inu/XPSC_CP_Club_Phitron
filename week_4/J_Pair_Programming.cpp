#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<int> ans;

    int l = 0, r = 0;

    while (l < n || r < m)
    {
        if (l < n && a[l] == 0)
        {
            ans.push_back(a[l]);
            k++;
            l++;
        }
        else if (r < m && b[r] == 0)
        {
            ans.push_back(b[r]);
            k++;
            r++;
        }
        else if (l < n && a[l] <= k)
        {
            ans.push_back(a[l]);
            l++;
        }
        else if (r < m && b[r] <= k)
        {
            ans.push_back(b[r]);
            r++;
        }
        else
        {
            cout << -1 << "\n";
            return;
        }
    }

    for (int val : ans)
        cout << val << " ";
    cout << "\n";
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