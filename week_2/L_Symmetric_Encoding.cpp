#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        set<char> st;

        for(int i = 0; i<n; i++){
            st.insert(s[i]);
        }

        string r;
        for(char c : st)
            r.push_back(c);

        int l = r.size();
        for(int i = 0; i<s.size(); i++){
            int pos = r.find(s[i]);
            s[i] = r[l -1 - pos];
            cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}