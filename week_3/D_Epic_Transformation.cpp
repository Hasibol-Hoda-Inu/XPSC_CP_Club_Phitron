#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        map<int, int> mp;

        for(int i = 1; i<=n; i++){
            int a; cin >> a;
            mp[a]++;
        }

        priority_queue<int> pq;
        for(auto [x, y] : mp)
            pq.push(y);

        while(!pq.empty()){
            if(pq.size() < 2)
                break;
                
            int x, y;

            x = pq.top();
            pq.pop();

            y = pq.top();
            pq.pop();

            x--;
            y--;

            if(x > 0)
                pq.push(x);
            if(y > 0)
                pq.push(y);
        }    
        
        int ans = 0;

        while(!pq.empty()){
            ans+= pq.top();
            pq.pop();
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}