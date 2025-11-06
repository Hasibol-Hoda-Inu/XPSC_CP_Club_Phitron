#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v;
    int cnt = 0;

    int l = 0, r = 0; 
    while(r<n){
        if(s[r] == 'W')
            cnt++;
        if(r-l+1 == k){
            v.push_back(cnt);
            if(cnt == 0)   
                break;
            if(s[l] == 'W')
                cnt--;
            l++;
        }
        r++;
    }

    sort(v.begin(), v.end());

    cout << v[0] << "\n";
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