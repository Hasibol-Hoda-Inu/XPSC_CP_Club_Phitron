#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n;
    ll s;
    cin >> n >> s;
    vector<int> v(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];

    int l = 0, r = 0;
    ll sum = 0;
    int ans = INT_MAX;

    while(r<n){
        sum += v[r];
        while(sum >= s){
            ans = min(ans, r-l+1);
            sum-=v[l];
            l++;
        }
        r++;
    }
    
    if(ans == INT_MAX)
        cout << -1;
    else
        cout << ans;

    return 0;
}