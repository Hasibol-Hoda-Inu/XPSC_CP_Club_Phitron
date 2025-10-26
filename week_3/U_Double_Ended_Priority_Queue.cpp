#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n, q;
    cin >> n >> q;
    multiset<int> ms;

    while (n--)
    {
        int a; cin >> a;
        ms.insert(a);
    }
    
    while (q--)
    {
        int a; cin >> a;
        if(a == 0){
            int x; cin >> x;
            ms.insert(x);
        }else if(a == 1){
            if(!ms.empty()){
                cout << *ms.begin() << "\n";
                ms.erase(ms.begin());
            }
        }else if(a == 2){
            if(!ms.empty()){
                cout << *--ms.end() << "\n";
                ms.erase(--ms.end());
            }
        }
    }
    
    return 0;
}
