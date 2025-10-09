#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    string str;
    str+= s[0];

    for(int i = 0; i<s.size(); i++)
        if(s[i] == '-')
            str+= s[i+1];
    
    cout << str;
            
    return 0;
}