#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        vector<pair<int, char>> ansl; 
        vector<pair<int, char>> ansb; 

        for (int i = 0; i < (int)s.size(); i++) {
            char c = s[i];
            if (c == 'b') {
                if (!ansl.empty())
                    ansl.pop_back();
            } 
            else if (c == 'B') {
                if (!ansb.empty())
                    ansb.pop_back();
            } 
            else if (islower(c)) {
                ansl.push_back({i, c});
            } 
            else if (isupper(c)) {
                ansb.push_back({i, c});
            }
        }

        vector<pair<int, char>> ans;
        ans.reserve(ansl.size() + ansb.size());

        ans.insert(ans.end(), ansl.begin(), ansl.end());
        ans.insert(ans.end(), ansb.begin(), ansb.end());

        sort(ans.begin(), ans.end()); 

        for (auto val : ans)
            cout << val.second;
        cout << "\n";
    }
    
    return 0;
}
