#include <bits/stdc++.h>
using namespace std;
#define ll long long

int find_next(int val, int start_index, int n, vector<vector<int>> &positions)
{
    auto it = upper_bound(positions[val].begin(), positions[val].end(), start_index);

    if (it == positions[val].end())
    {
        return -1;
    }
    else
    {
        return *it;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> positions(n + 1);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        positions[a[i]].push_back(i);
    }

    int segments = 0;
    int current_start = 0;

    int required_end_for_current = 0;

    while (current_start < n)
    {
        segments++;
        set<int> current_set;

        int min_end_for_next = current_start;
        bool found_end_for_this_segment = false;

        for (int i = current_start; i < n; i++)
        {
            current_set.insert(a[i]);

            int temp_min_end = i;
            bool possible_to_split = true;

            for (int val : current_set)
            {
                int next_occ = find_next(val, i, n, positions);

                if (next_occ == -1)
                {
                    possible_to_split = false;
                    temp_min_end = n - 1;
                    break;
                }

                temp_min_end = max(temp_min_end, next_occ);
            }

            if (i < required_end_for_current)
            {
                continue;
            }

            current_start = i + 1;

            required_end_for_current = temp_min_end;

            found_end_for_this_segment = true;

            if (!possible_to_split)
            {

                current_start = n;
            }

            break;
        }

        if (!found_end_for_this_segment)
        {
            current_start = n;
        }
    }

    cout << segments << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}