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
    }
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, flag = 0;
        cin >> a >> b;

        for (int val : mat[a])
        {
            if (val == b)
            {
                flag = 1;
                break;
            }
        }

        if (a == b)
            cout << "YES" << endl;
        else
        {
            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}