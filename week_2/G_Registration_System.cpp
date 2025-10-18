#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    map<string, int> email;
    
    while(n--)
    {
        string s; cin >> s;
        if(email.count(s) == 0){
            cout << "OK\n";
            email[s] = 0;
        }else{
            email[s]++;
            cout << s << email[s] << "\n";
        }

    }
    
    return 0;
}