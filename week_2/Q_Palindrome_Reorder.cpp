#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s; cin >> s;
    map<char, int> fre;
    
    for(auto c : s)
        fre[c]++;
    
    int odd = 0;
    for(auto val : fre)
        if(val.second %2 != 0)
            odd++;
    if(odd > 1){
        cout << "NO SOLUTION";
        return 0;
    }

    string left, middle, right;
    for(auto val : fre){
        if(val.second %2 != 0)
            for(int i = 0; i<val.second; i++)
                middle.push_back(val.first);
        else
            for(int i = 0; i<val.second/2; i++)
                left.push_back(val.first);
    }

    right = left;
    reverse(right.begin(), right.end());

    cout << left << middle << right;

    return 0;
}