#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n, q; 
    cin >> n >> q;
    vector<priority_queue<int>> vpq(n+1);

    while (q--)
    {
        int a, t, x;
        cin >> a;
        if(a == 0){
            cin >> t >> x;
            vpq[t].push(x);
        }else if(a == 1){
            cin >> t;
            if(!vpq[t].empty())
                cout << vpq[t].top() << "\n";
        }else if(a == 2){
            cin >> t;
            if(!vpq[t].empty())
                vpq[t].pop();
        }
    }
    
    return 0;
}