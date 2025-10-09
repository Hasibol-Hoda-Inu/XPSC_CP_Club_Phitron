#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, y, k;
    cin >> x >> y >> k;
    
    int dif = abs(x-y);

    if(dif > k)
        cout << "No\n";
    else
        cout << "Yes\n";


    return 0;
}