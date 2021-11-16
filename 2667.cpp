#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
int cnt = 0;
int arr[26][26];
int chk[26][26];
vector<int> v;
int dir[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

void dfs(int y, int x)
{
    chk[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int yy = y + dir[i][0], xx = x + dir[i][1];
        if (yy < 0 || xx < 0 || yy >= N || xx >= N)
            continue;
        if (arr[yy][xx] == 1 && chk[yy][xx] == 0)
        {
            cnt++;
            dfs(yy, xx);
        }
    }
}

int main()
{
    cout.tie(NULL);
    ios::sync_with_stdio;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%1d", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i][j] == 1 && chk[i][j] == 0)
            {
                cnt++;
                dfs(i, j);
                v.push_back(cnt);
                cnt = 0;
            }
        }
    }
    cout << v.size() << '\n';
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
}