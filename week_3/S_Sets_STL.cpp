#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    set<int> s;

    while (n--)
    {
        int q, x;
        cin >> q >> x;
        if(q == 1){
            s.insert(x);
        }else if(q == 2){
            s.erase(x);
        }else if(q == 3){
            if(s.count(x) != 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    
    return 0;
}