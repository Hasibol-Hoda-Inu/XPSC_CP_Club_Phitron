#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ones = 0;
        int others = 0;

        for (int i = 0; i < n; i++)
        {
            int h; cin >> h;
            if(h==1)
                ones++;
            else
                others++;
        }

        int a = (ones+1)/2;
        int ans = a+others;
        cout << ans << "\n"; 
    }
    
    return 0;
}