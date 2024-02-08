#include <bits/stdc++.h>
using namespace std;

int row, col, fl = 0;

char graph[1005][1005];
bool visit[1005][1005];
int dist[1005][1005];

vector<pair<int, int>> track_sum = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool Valid(int srci, int srcj)
{
    if (srci < 0 || srci >= row || srcj < 0 || srcj >= col)
        return false;
    else
        return true;
}

void bfs(int srcr, int srcc)
{
    queue<pair<int, int>> traverse;
    traverse.push({srcr, srcc});
    
    visit[srcr][srcc] = true;
    dist[srcr][srcc] = 0;

    while (!traverse.empty())
    {
        pair<int, int> prnt = traverse.front();
        int x = prnt.first, y = prnt.second;
        traverse.pop();
        if (graph[x][y] == 'B')
        {
            fl = 1;
            
        }
        for (int i = 0; i < 4; i++)
        {
            int ro = x + track_sum[i].first;
            int co = y + track_sum[i].second;

            if (Valid(ro, co) == true && visit[ro][co] == false && (graph[ro][co] == '.' || graph[ro][co] == 'B'))
            {
                traverse.push({ro, co});
                visit[ro][co] = true;
                dist[ro][co] = dist[x][y] + 1;
            }
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

    int srcro, srccl;
    for (int r = 0; r < row; r++)
    {
        for (int c = 0; c < col; c++)
        {
            if (graph[r][c] == 'A')
            {
                srcro = r;
                srccl = c;
                break;
            }
        }
    }

    memset(visit, false, sizeof(visit));
    memset(dist, -1, sizeof(dist));

    bfs(srcro, srccl);
    if (fl)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}