#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int x; cin >> x;
    string s = to_string(x);

    char mn = '9';
    for(char c : s){
        mn = min(mn, c);
    }

    cout << mn << "\n";
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