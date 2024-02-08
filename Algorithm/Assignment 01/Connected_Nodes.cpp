#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> mat[1005];

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        if (mat[x].size() == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(mat[x].begin(), mat[x].end(), greater<int>());

            for (int val : mat[x])
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    return 0;
}