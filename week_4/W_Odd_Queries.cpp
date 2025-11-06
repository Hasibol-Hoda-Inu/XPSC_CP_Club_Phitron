#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, q; cin >> n >> q;
    vector<ll> v(n+1);
    vector<ll> pre(n+1);

    for(int i = 1; i<=n; i++){
        cin >> v[i];
        pre[i] = pre[i-1] + v[i];
    }

    ll it = *max_element(pre.begin(), pre.end());

    for(int i = 1; i<=q; i++){
        ll l, r, k;
        cin >> l >> r >> k;
        ll sum = it;
        sum+= ((r - l + 1) * k) - (pre[r] - pre[l-1]);
        // vector<int> temp = v;

        // for(int i = l; i<=r; i++){
        //     temp[i] = k;
        // }


        
        // for(int val : temp)
        //     sum+= val;

        if(sum%2 != 0)
            cout << "YES\n";
        else
            cout << "NO\n";
        
    }

    
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