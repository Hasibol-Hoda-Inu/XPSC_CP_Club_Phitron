#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, n; cin >> x >> n;
    set<int> lights;
    multiset<int> dis;

    lights.insert(0);
    lights.insert(x);
    dis.insert(x);

    for(int i = 0; i<n; i++){
        int p; cin >> p;
        auto it = lights.upper_bound(p);
        int r = *it;
        it--;
        int l = *it;
        dis.erase(dis.find(r-l));
        dis.insert(r-p);
        dis.insert(p - l);

        lights.insert(p);
        
        cout << *dis.rbegin() << " ";
    }
    cout << "\n";
    return 0;
}