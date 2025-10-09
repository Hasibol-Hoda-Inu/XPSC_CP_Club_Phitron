#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    bool flag = false;

    for(int i = 0, j = 1; j<s.size(); i++, j++){
        if(s[i] == 's' && s[j] == 's'){
            flag = true;
            break;
        }
    }

    if(flag)
        cout << "hiss";
    else
        cout << "no hiss";

    return 0;
}