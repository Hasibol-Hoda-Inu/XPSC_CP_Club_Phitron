#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 1; i < n; i++)
    {
        cin >> v[i];                        // O(N)
    }
    
    sort(v.begin(), v.end());               // O(log N)
    // for(int a : v)
    //     cout << a << " ";

    for (int i = 1; i <= n; i++)            // O(N)    
    {
        if(i != v[i]){
            cout << i;
            break;
        }
    }
    
    return 0;
}