#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      
    int n; cin >> n;
    multiset<int> ms;

    for(int i = 0; i<n; i++){
        int a; cin >> a;
        if(ms.empty())
            ms.insert(a);
        else{
            if(ms.upper_bound(a) == ms.end())
                ms.insert(a);
            else{
                ms.erase(ms.upper_bound(a));
                ms.insert(a);
            }
        }
    }
    cout << ms.size();
    return 0;
}