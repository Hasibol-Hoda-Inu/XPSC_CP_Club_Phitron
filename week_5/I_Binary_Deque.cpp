#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    deque<int> d(n);

    for (int i = 0; i < n; i++)
        cin >> d[i];

    int l = 0, r = 0, sum = 0, ans = -1;
    while (r < n)
    {
        sum += d[r];
        if (sum == k)
        {
            ans = max(ans, r - l + 1);
        }
        while (sum > k)
        {
            sum -= d[l];
            l++;
        }
        r++;
    }

    if (ans == -1)
        cout << ans << "\n";
    else
        cout << n - ans << "\n";
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