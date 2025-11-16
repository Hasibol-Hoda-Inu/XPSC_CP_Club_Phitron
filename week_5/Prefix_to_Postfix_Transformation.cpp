#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    string s; cin >> s;
    string str;
    string pre;

    for(char c : s){
        if(c >= '0' && c <='9')
            str+=c;
        else
            pre+=c;
    }

    string ans = str+pre;
    cout << ans;
    return 0;
}