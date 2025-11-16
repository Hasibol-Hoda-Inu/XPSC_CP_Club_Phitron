#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n, k; cin >> n >> k;
    pbds<int> p;
    for(int i = 1; i<=n; i++)
        p.insert(i);

    int i = k%n;

    while(n--){
        auto it = p.find_by_order(i);
        cout << *it << " ";
        p.erase(it);
        if(n)
            i = (i+k) % n;
    }

    return 0;
}