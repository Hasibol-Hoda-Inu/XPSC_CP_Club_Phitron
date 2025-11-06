#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n;i++){
        cin >> v[i];
    }

    int l = 0, r = n-1; 
    ll ls = v[l], rs = v[r], ans = 0;
    
    while(l < r){
        if(ls == rs){
            ans = ls;
            l++, r--;
            if(l<r){
                ls+=v[l];
                rs+=v[r];
            }
        }
        else if(ls < rs)
            l++, ls+=v[l];
        else
            r--, rs+=v[r];
    }

    cout << ans;

    return 0;
}