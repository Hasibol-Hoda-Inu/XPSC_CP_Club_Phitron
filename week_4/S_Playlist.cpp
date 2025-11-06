#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n; cin >> n;
    map<int, int> mp;
    int ans = 0;

    for(int i = 1, j = 1; j<=n; j++){
        int a; cin >> a;
        i = max(i, mp[a]+1);
        mp[a] = j;
        ans = max(ans, j-i+1);
    }

    cout << ans;

    return 0;
}