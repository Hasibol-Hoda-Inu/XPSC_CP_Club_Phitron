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
        int n;
        cin >> n;

        string s0, s1;
        cin >> s0 >> s1;

        int zeros1 = 0;
        int pos1 = 0;

        int zeros2 = 0;
        int pos2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                pos1++;
                if (s0[i] == '0')
                    zeros1++;
                if (s1[i] == '0')
                    zeros2++;
            }
            else
            {
                pos2++;
                if (s0[i] == '0')
                    zeros2++;
                if (s1[i] == '0')
                    zeros1++;
            }
        }

        bool l = (zeros1 >= pos1);
        bool r = (zeros2 >= pos2);

        if (l && r)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}