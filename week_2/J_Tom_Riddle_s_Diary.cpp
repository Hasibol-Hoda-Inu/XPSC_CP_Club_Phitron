#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    map<string, int> mp;
    for(int i = 0; i<n; i++){
        string s; cin >> s; 
        if(mp.find(s) == mp.end()){
            mp[s]++;
            cout << "NO\n";
        }else{
            cout << "YES\n";
        }
    }
    return 0;
}