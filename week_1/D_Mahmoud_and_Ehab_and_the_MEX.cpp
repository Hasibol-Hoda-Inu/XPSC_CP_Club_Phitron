#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k; cin >> n >> k;
    set<int> s;
    int cnt = 0;
    

    for (int i = 0; i < n; i++){
        int val; cin >> val;
        s.insert(val);
    }
    
    for(int i = 0; i<k; i++)
        if(s.find(i) == s.end())
            cnt++;    
    
    if(s.find(k) != s.end())
        cnt++;
    
    cout << cnt;
    
    return 0;
}