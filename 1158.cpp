#include <iostream>
#include <queue>
using namespace std;
int n, k, tmp;
queue<int> q;

int main()
{

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        q.push(i + 1);
    }

    cout << '<';

    while (q.size() > 1)
    {
        for (int i = 0; i < k - 1; i++)
        {
            tmp = q.front();
            q.push(tmp);
            q.pop();
        }

        tmp = q.front();
        cout << tmp << ", ";
        q.pop();
    }
    tmp = q.front();
    cout << tmp << ">\n";
}