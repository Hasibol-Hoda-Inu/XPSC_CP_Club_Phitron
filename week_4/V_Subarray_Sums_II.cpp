#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n, k; cin >> n >> k;
    map<ll, ll> sumFre;
    ll sum = 0;
    ll ans = 0;
    sumFre[0] = 1;

    for(int i = 1; i<=n; i++){
        int a; cin >> a;
        sum+= a;
        ans+= sumFre[sum - k];
        sumFre[sum]++; 
    }

    cout << ans;
    return 0;
}