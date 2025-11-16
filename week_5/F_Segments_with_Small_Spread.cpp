#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n;
    ll s;
    cin >> n >> s;
    vector<ll> v(n);

    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    int l = 0, r = 0;
    ll ans = 0;
    multiset<ll> ms;

    while(r<n){
        ms.insert(v[r]);
        if((*ms.rbegin() - *ms.begin()) <= s){
            ans+= (r-l+1);
        }else{
            while((*ms.rbegin() - *ms.begin()) > s){
                ms.erase(ms.find(v[l]));
                l++;
            }
            if((*ms.rbegin() - *ms.begin()) <= s)
                ans+= (r-l+1);
        }
        r++;
    }

    cout << ans;

    return 0;
}