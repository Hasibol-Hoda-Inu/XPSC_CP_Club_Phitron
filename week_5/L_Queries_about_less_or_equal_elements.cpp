#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n, m;
    cin >> n >> m;
    pbds<int> p;

    for(int i = 0; i<n; i++){
      int a; cin >> a; 
      p.insert(a);
    }

    while (m--)
    {
        int a; cin >> a;
        cout << p.order_of_key(a+1) << " ";
    }
    
    
    return 0;
}