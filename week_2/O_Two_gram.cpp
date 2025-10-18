#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    string s; cin >> s;
    map<string, int> mp;

    for(int i = 0, j = 1; j<n; i++, j++){
        string str = {s[i], s[j]};
        mp[str]++;
    }

    int mx = INT_MIN;
    string ans;

    for(auto [key, val] : mp){
        if(mx < val){
            mx = val;
            ans = key;
        }
    }
    cout << ans;


    return 0;
}