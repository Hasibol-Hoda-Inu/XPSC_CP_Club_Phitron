#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    multiset<int> ms;

    for(int i = 0; i<n; i++){
        int a; cin >> a;
        ms.insert(a);
    }
    
    int cnt = 0;

    for(int i = 1; i<=n; i++){
        auto it = ms.lower_bound(i);
        if(it != ms.end()){
            cnt++;
            ms.erase(it);
        }else
            break;
    }

    cout << cnt;
    
    
    return 0;
}