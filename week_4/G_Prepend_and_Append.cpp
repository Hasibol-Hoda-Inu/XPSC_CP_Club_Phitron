#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int l = 0, r = n - 1;
    int cnt = 0;

    while (l < r)
    {
        if (s[l] != s[r])
        {
            cnt += 2;
            l++, r--;
        }
        else
            break;
    }

    cout << n - cnt << "\n";
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