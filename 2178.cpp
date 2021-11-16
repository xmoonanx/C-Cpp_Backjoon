#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int N, M;
int arr[100][100] = {0};
int cnt[100][100] = {0};
bool visited[100][100];

int dx[] = {0, 1, 0, -1}; //12�ú��� �ð����
int dy[] = {-1, 0, 1, 0};

void bfs(int x, int y)
{
    visited[x][y] == true;
    cnt[x][y]++;
    queue<pair<int, int>> q;
    q.push({x, y});

    while (!q.empty())
    {
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nx = xx + dx[i];
            int ny = yy + dy[i];

            if (nx >= 0 && nx < N && ny >= 0 && ny < M && !visited[nx][ny] && arr[nx][ny] == 1)
            {
                visited[nx][ny] = true;
                q.push({nx, ny});
                cnt[nx][ny] = cnt[xx][yy] + 1;
            }
        }
    }
}

int main()
{
    cout.tie(0);
    cin >> N >> M;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%1d", &arr[i][j]);
        }
    }

    bfs(0, 0);

    cout << cnt[N - 1][M - 1];
}