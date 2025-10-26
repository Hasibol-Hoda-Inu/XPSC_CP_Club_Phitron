#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n; cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) 
        cin >> v[i];

    int m; cin >> m;
    
    for(int i = 0; i < m; i++) {
        string s;
        cin >> s;

        if(s.length() != n) {
            cout << "NO\n";
            continue;
        }

        map<int, char> numchr;
        map<char, int> chrrnum;
        bool flag = true;

        for(int j = 0; j < n; j++) {
            int num = v[j];
            char chr = s[j];

            if(numchr.count(num)) {
                if(numchr[num] != chr) {
                    flag = false;
                    break;
                }
            } else {
                numchr[num] = chr;
            }

            if(chrrnum.count(chr)) {
                if(chrrnum[chr] != num) {
                    flag = false;
                    break;
                }
            } else {
                chrrnum[chr] = num;
            }
        }

        if(flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int t; cin >> t;

    while(t--){
        solve();
    }

    return 0;
}