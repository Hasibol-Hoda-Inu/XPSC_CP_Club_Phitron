#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m; cin >> n >> m;
    multiset<int> ms;
    for(int i = 1; i<=n; i++){
        int h; cin >> h;
        ms.insert(h);

    }

    for(int i = 1; i<=m; i++){
        int t; cin >> t;
        auto it = ms.upper_bound(t);
        if(it == ms.begin()){
            cout << -1 << "\n";
        }else{
            it--;
            cout << *it << "\n";
            ms.erase(it);
        }
    }
    return 0;
}