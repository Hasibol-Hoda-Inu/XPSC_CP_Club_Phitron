#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;
    vector<vector<ll>> v(n);
    int k = 0; 
    ll sum = 0;
    
    int l = 0;
    for(int i = 0; i<n; i++){
        ll a; cin >> a;
        if(a<0)
            v[l].push_back(a);
        else if(a>0)
            l++;
        sum+=abs(a - 0);
    }

    for(auto val : v){
        if(!val.empty())
            k++;
    }
    
    cout << sum << " " << k << "\n";
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