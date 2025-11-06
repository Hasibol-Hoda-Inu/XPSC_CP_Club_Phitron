#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n, m; cin >> n >> m;
    multiset<int> ms1;
    multiset<int> ms2;

    for(int i = 0; i<n; i++){
        int a; cin >> a;
        ms1.insert(a);
    }

    for(int i = 0; i<m; i++){
        int a; cin >> a;
        ms2.insert(a);
    }

    for(int val : ms2)
        ms1.insert(val);

    for(int val : ms1)
        cout << val << " ";
    
    return 0;
}