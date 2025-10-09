#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    set<char> c;
    for(char chr : s)
        c.insert(chr);

    for(char i = 'a'; i<= 'z'; i++){
        if(c.find(i) == c.end()){
            cout << i;
            return 0;
        }
    }   
    cout << "None";

    return 0;
}