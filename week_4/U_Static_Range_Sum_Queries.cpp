#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n, q; cin >> n >> q;
    vector<ll> v(n+2);
    vector<ll> pre(n+2);

    for(int i = 1; i<=n; i++){
        cin >> v[i];
        pre[i] = pre[i-1] + v[i];
    }

    while(q--){
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l-1] << "\n";
    }

    return 0;
}