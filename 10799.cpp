#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int cnt = 0;
    string str;
    cin >> str;

    stack<int> s;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            s.push(str[i]);
        else
        {
            if (str[i - 1] == '(')
            {
                s.pop();
                cnt += s.size();
            }

            else
            {
                s.pop();
                cnt++;
            }
        }
    }
    cout << cnt;
}