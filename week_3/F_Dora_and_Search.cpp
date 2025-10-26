#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> v(n); 
    multiset<int> ms;

    for(int i = 0; i<n; i++){
        cin >> v[i];
        ms.insert(v[i]);
    }

    int l = 0, r = n-1;
    while(l<r){
        int mn = *ms.begin();
        int mx = *ms.rbegin();

        if(v[l] != mn && v[r] != mn && v[l] != mx && v[r] != mx){
            cout << l+1 << " " << r+1 << "\n";
            return;
        }

        if(v[l] == mx || v[l] == mn){
            ms.erase(v[l]);
            l++;
        }

        if(v[r] == mx || v[r] == mn){
            ms.erase(v[r]);
            r--;
        }
    }
         
    cout << -1 << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    int t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}