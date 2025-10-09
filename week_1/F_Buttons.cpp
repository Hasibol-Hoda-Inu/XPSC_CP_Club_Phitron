#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    int sum = 0;

    for (int i = 0; i < 2; i++)
    {
        if (a > b)
        {
            sum += a;
            a--;
        }
        else
        {
            sum += b;
            b--;
        }
    }
    cout << sum;
    return 0;
}