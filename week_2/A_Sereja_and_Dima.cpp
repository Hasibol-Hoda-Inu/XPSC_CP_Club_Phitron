#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int s = 0, d = 0;
    while (!v.empty())
    {
        if(v.front() > v.back()){
            s+= v.front();
            v.erase(v.begin() + 0);
        }else {
            s+= v.back();
            v.pop_back();    
        }
        
        if(v.empty())
            break;
        
        if(v.front() > v.back()){
            d+= v.front();
            v.erase(v.begin() + 0);
        }else {
            d+= v.back();
            v.pop_back();    
        }
            
    }
    
    cout << s << " " << d;
    return 0;
}