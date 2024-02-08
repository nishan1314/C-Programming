#include <bits/stdc++.h>
using namespace std;

int row, col;
char graph[1005][1005];
bool visit[1005][1005];

vector<int> aprt_size;
vector<pair<int, int>> track_sum = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool Valid(int srci, int srcj)
{
    return (srci >= 0 && srci < row && srcj >= 0 && srcj < col);
}

int dfs(int srcr, int srcc)
{
    int cnt = 1;
    visit[srcr][srcc] = true;

    for (int i = 0; i < 4; i++)
    {
        int ro = srcr + track_sum[i].first;
        int co = srcc + track_sum[i].second;

        if (Valid(ro, co) && !visit[ro][co] && graph[ro][co] == '.')
        {
            cnt += dfs(ro, co);
        }
    }
    return cnt;
}

int main()
{
    cin >> row >> col;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            cin >> graph[r][c];
        }
    }

    memset(visit, false, sizeof(visit));

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (graph[r][c] == '.' && visit[r][c] == false)
            {
                int appcnt = dfs(r, c);
                if (appcnt > 0)
                {
                    aprt_size.push_back(appcnt);
                }
            }
        }
    }

    sort(aprt_size.begin(), aprt_size.end());

    for (int size : aprt_size)
    {
        cout << size << " ";
    }

    if (aprt_size.empty())
    {
        cout << "0";
    }

    return 0;
}
