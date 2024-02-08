#include <bits/stdc++.h>
using namespace std;

int row, col, cnt = 0;
char graph[1005][1005];
bool visit[1005][1005];

vector<pair<int, int>> track_sum = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool Valid(int srci, int srcj)
{
    return (srci >= 0 && srci < row && srcj >= 0 && srcj < col);
}

void dfs(int srcr, int srcc)
{
    visit[srcr][srcc] = true;
    for (int i = 0; i < 4; i++)
    {
        int ro = srcr + track_sum[i].first;
        int co = srcc + track_sum[i].second;

        if (Valid(ro, co) == true && visit[ro][co] == false && graph[ro][co] == '.')
        {
            dfs(ro, co);
        }
    }
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
    cnt = 0;

    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (graph[r][c] == '.' && !visit[r][c])
            {
                cnt++;
                dfs(r, c);
            }
        }
    }

    cout << cnt << endl;

    return 0;
}