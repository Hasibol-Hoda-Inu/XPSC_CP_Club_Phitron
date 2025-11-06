#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
      
    int n, x; cin >> n >> x;
    vector<int> v(n);

    for(int i = 0; i<n; i++)
        cin >> v[i];

    int l = 0, r = 0, cnt = 0, sum = 0;
    while(r<n){
        sum+= v[r];
        while(sum > x && l<=r){
            sum-=v[l];
            l++;
        }
        if(sum == x){
            cnt++;
            sum-=v[l];
            l++;
        }
        r++;
    }
    cout << cnt;
    return 0;
}