#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<pair<string, string>> v(n);
    vector<string> temp(n);

    for(int i = 0; i<n; i++){
        string a, b;
        cin >> a >> b;
        if(i == 0){
            v[i].first = a;
            v[i].second = b;
            temp[i] = b;
            continue;
        }
        bool flag = false;
        for(int j = 0; j<temp.size(); j++){
            if(a == temp[j]){
                flag = true;
                temp[j] = b;
                v[j].second = b;
                break;
            }
        }
        if(flag)
            continue;

        v[i].first = a;
        v[i].second = b;
        temp[i] = b;
    }
    int cnt = 0;
    for(auto val : v){
        if(!val.first.empty() && !val.second.empty())
            cnt++;
    }
    cout << cnt << "\n";

    for(auto val : v){
        if(!val.first.empty() && !val.second.empty())
            cout <<  val.first << " " << val.second << "\n";
    }

    return 0;
}