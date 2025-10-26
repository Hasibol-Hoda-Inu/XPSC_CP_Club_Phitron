#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    sort(s.begin(), s.end());
    vector<string> v;
    v.push_back(s);

    while(next_permutation(s.begin(), s.end())){
        v.push_back(s);
    }
    cout << v.size() << "\n";
    for(string val : v)
        cout << val << "\n";

    return 0;
}