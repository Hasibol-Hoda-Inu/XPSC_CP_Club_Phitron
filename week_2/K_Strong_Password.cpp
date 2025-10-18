#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        string s; cin >>s ;
        
        if(s.size() == 1)
            s.insert(s.begin() + 0, s[0]+1);

        for(int i = 0, j = 1; j<s.size(); i++, j++){
            if(s[i] == s[j]){
                s.insert(s.begin() + j, s[j]+1);
                break;
            }
        }
        string str = "Enu";
        str.insert(3, "u");
        cout << s << "\n";
    }
    return 0;
}