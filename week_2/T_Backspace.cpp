#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    string r;
    for(char c : s){
        if(c == '<')
            r.pop_back();
        else
            r.push_back(c);
    }
    cout << r;
    return 0;
}

