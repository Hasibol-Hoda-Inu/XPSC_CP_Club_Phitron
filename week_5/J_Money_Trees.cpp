#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k; cin >> n >> k;
    vector<int> v(n);
    vector<int> h(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];
    for(int i = 0; i<n; i++)
        cin >> h[i];
    
    int l = 0, r = 0, ans = 0;
    ll sum = 0;

    while(r<n){
        sum+=v[r];
        if(r > 0 && h[r-1] % h[r] != 0){
            l = r;
            sum = v[r];
        }
        while(sum > k){
            sum-=v[l];
            l++;
        }
        ans = max(ans, r-l+1);
        r++;
    }

    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int t; cin >> t;

    while(t--){
        solve();
    }

    return 0;
}