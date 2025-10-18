#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;

        vector<long long> v;
        long long cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                cnt += i;
                long long dif = (n - 1 - i) - i;
                if (dif > 0)
                    v.push_back(dif);
            }
            else
            {
                cnt += (n - 1 - i);
                long long dif = i - (n - 1 - i);
                if (dif > 0)
                    v.push_back(dif);
            }
        }

        sort(v.rbegin(), v.rend());

        vector<long long> ans(n);
        long long sum = cnt;
        for (int k = 0; k < n; k++)
        {
            if (k < (int)v.size())
                sum += v[k];
            ans[k] = sum;
        }

        for (long long val : ans)
            cout << val << " ";
        cout << "\n";
    }

    return 0;
}
