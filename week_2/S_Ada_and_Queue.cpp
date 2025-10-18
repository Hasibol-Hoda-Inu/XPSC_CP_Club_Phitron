#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    int x = 0;
    deque<int> dq;

    while (q--)
    {
        string s;
        cin >> s;

        if (s == "back")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?\n";
            }
            else if (x == 0)
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            else
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (s == "front")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?\n";
            }
            else if (x == 0)
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if (s == "reverse")
        {
            x = !x;
        }
        else if (s == "push_back")
        {
            int n;
            cin >> n;
            if (x == 0)
                dq.push_back(n);
            else
                dq.push_front(n);
        }
        else if (s == "toFront")
        {
            int n;
            cin >> n;
            if (x == 0)
                dq.push_front(n);
            else
                dq.push_back(n);
        }
    }

    return 0;
}