#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int f = 1;
        for(int i = 1; i<=n; i++){
            f*=i;
        }
     
        string s = to_string(f);
        cout << s[s.size()-1] << "\n";
    }
    
    return 0;
}