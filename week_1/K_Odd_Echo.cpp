#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<string> v(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];

    for(int i = 0; i<n; i+=2)
        cout << v[i] << "\n";

    return 0;
}