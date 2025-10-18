#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    set<pair<string, string>> s;

    for(int i = 0; i<n; i++){
        string k, val;
        cin >> k >> val;
        s.insert({k, val});
    }

    cout << s.size();

    return 0;
}