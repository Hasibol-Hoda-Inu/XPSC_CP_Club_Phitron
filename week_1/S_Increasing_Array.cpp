#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    long long cnt = 0;
    for(int i = 0, j = 1; j<n; i++, j++){
        if(v[j] < v[i]){
            long long dif = v[i] - v[j];
            cnt+= dif;
            v[j]+= dif;
        }
    }
    cout << cnt;
    return 0;
}