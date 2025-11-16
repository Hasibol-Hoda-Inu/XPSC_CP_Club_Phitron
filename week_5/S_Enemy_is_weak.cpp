#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    vector<ll> inv(n);
    pbds<int> p_right;
    for(int j = n-1; j>=0; j--){
        inv[j] = p_right.order_of_key(v[j]);
        p_right.insert(v[j]);
    }

    ll ans = 0;
    pbds<ll> p_left;
    for(int j = 0; j<n; j++){
        ll sval = p_left.order_of_key(v[j]);
        ll bval = p_left.size() - sval;
        ans+=(inv[j]*bval);
        p_left.insert(v[j]);
    }

    cout << ans;
    return 0;
}