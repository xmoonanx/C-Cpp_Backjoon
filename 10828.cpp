#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    stack<int> s;
    while (n--)
    {
        string cmd;
        cin >> cmd;

        if (cmd == "push")
        {
            int num;
            cin >> num;
            s.push(num);
        }

        else if (cmd == "pop")
        {
            if (s.empty())
                cout << -1 << '\n';
            else
            {
                cout << s.top() << '\n';
                s.pop();
            }
        }

        else if (cmd == "top")
        {
            if (s.empty())
                cout << -1 << '\n';
            else
            {
                cout << s.top() << '\n';
            }
        }
        else if (cmd == "size")
        {
            cout << s.size() << '\n';
        }
        else if (cmd == "empty")
        {
            if (s.empty())
                cout << 1 << '\n';
            else
                cout << 0 << "\n";
        }
    }
}