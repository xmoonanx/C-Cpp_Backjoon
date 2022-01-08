#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    stack<int> s;
    vector<char> ans;
    int m = 1;
    while (n--)
    {
        int num;
        cin >> num;

        while (num >= m)
        {
            s.push(m++);
            ans.push_back('+');
        }

        if (s.top() == num)
        {
            s.pop();
            ans.push_back('-');
        }

        else
        {
            cout << "NO";
            return 0;
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << '\n';
    }
}