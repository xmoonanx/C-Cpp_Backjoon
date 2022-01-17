#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    deque<int> dq;
    string command;

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> command;
        if (command == "push_front")
        {
            cin >> n;
            dq.push_front(n);
        }
        else if (command == "push_back")
        {
            cin >> n;
            dq.push_back(n);
        }
        else if (command == "pop_front")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (command == "pop_back")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (command == "size")
        {
            cout << dq.size() << '\n';
        }
        else if (command == "empty")
        {
            if (dq.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (command == "front")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
            }
        }
        else if (command == "back")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
            }
        }
    }
    return 0;
}