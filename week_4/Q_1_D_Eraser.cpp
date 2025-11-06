#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
        
    int i = 0, ans = 0; 

    while(i<n){
        if(s[i] == 'W')
            i++;
        else{
            ans++;
            i = i+k;
        }
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