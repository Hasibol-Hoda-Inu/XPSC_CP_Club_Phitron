#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;
    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        int dif = x - a;
        if (mp.count(dif))
        {
            cout << mp[dif] << " " << i;
            return 0;
        }
        mp[a] = i;
    }

    cout << "IMPOSSIBLE";

    return 0;
}