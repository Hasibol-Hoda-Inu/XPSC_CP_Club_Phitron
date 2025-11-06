#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n, q; cin >> n >> q;
    vector<int> v(n);

    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    vector<int> dif(n+1);

    for(int i = 0; i<q; i++){
        int l, r; 
        cin >> l >> r;
        l--, r--;
        dif[l]++;
        dif[r+1]--;

    }

    for(int i = 1; i<=n; i++){
        dif[i] = dif[i - 1] + dif[i];
    }

    sort(v.rbegin(), v.rend());
    sort(dif.rbegin(), dif.rend());

    ll ans = 0;
    for(int i = 0; i<n; i++){
        ans+= (ll)v[i]*dif[i];
    }

    cout << ans << "\n";

    return 0;
}