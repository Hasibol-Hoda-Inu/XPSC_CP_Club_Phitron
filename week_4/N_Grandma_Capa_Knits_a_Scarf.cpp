#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int ans = n+2;

    for (char i = 'a'; i <= 'z'; i++)
    {
        int l = 0, r = n - 1, remove = 0;
        bool flag = true;

        while (l < r)
        {
            if (s[l] == s[r])
            {
                l++, r--;
            }
            else if (s[l] == i)
            {
                remove++;
                l++;
            }else if(s[r] == i){
                remove++;
                r--;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
            ans = min(remove, ans);
    }
    if(ans == n+2)
        cout << -1 << "\n";
    else
        cout << ans << "\n";
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