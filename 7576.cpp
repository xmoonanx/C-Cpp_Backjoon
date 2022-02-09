#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, result = 0;
int arr[1001][1001];
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

queue<pair<int, int>> q;
bool InSide(int yy, int xx)
{
    return (0 <= xx && 0 <= yy && xx < M && yy < N);
}

void bfs()
{
    while (!q.empty())
    {
        int y = q.front().first;
        int x = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int yy = y + dir[i][1];
            int xx = x + dir[i][0];

            if (InSide(yy, xx) == 1 && arr[yy][xx] == 0)
            {
                arr[yy][xx] = arr[y][x] + 1;
                q.push({yy, xx});
            }
        }
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    cin >> M >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];

            if (arr[i][j] == 1)
            {
                q.push({i, j});
            }
        }
    }

    bfs();

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (arr[i][j] == 0)
            {
                cout << -1 << '\n';
                return 0;
            }

            if (result < arr[i][j])
            {
                result = arr[i][j];
            }
        }
    }
    cout << result - 1 << '\n';
}