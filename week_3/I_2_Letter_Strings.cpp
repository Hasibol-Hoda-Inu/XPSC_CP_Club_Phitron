#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    map<string, ll> freq;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        freq[s]++;
    }

    ll pairs = 0;

    for (auto [s, cnt] : freq)
    {
        char c1 = s[0];
        char c2 = s[1];

        for (char c = 'a'; c <= 'k'; c++)
        {
            if (c != c2)
            {
                string temp = "";
                temp += c1;
                temp += c;

                if (freq.count(temp))
                    pairs += cnt * freq[temp];
            }
        }

        for (char c = 'a'; c <= 'k'; c++)
        {
            if (c != c1)
            {
                string temp = "";
                temp += c;
                temp += c2;

                if (freq.count(temp))
                    pairs += cnt * freq[temp];
            }
        }
    }

    cout << pairs / 2 << "\n";
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