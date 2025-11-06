#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n; cin >> n;
    map<int, ll> dif;

    for(int i = 0; i<n; i++){
        int l, r;
        cin >> l >> r;
        dif[l]++;
        dif[r+1]--;
    }
    ll sum = 0;
    for(auto [k, val] : dif){
        sum+= val;
        if(sum > 2){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}