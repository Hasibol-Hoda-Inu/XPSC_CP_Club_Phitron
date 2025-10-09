#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    float n; cin >> n;
    float sum = 0;
    for(int i = 0; i<n; i++){
        float q, y;
        cin >> q >> y;
        sum+= q*y;
    }
    // printf("%.3f", sum);
    // cout << fixed << setprecision(3) << sum;
    cout << format("{:.3}", sum);
    return 0;
}