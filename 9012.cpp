#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<char> q;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int n, cnt;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cnt = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] == '(')
            {
                cnt++;
            }
            else
                cnt--;
            if (cnt < 0)
                break;
        }
        if (cnt == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}