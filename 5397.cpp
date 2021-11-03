#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        stack<char> tmp, result;

        for (int j = 0; j < s.size(); j++)
        {

            if (s[j] == '<')
            {
                if (!result.empty())
                {
                    tmp.push(result.top());
                    result.pop();
                }
            }
            else if (s[j] == '>')
            {
                if (!tmp.empty())
                {
                    result.push(tmp.top());
                    tmp.pop();
                }
            }
            else if (s[j] == '-')
            {
                if (!result.empty())
                {
                    result.pop();
                }
            }
            else
            {
                result.push(s[j]);
            }
        }
        while (!tmp.empty())
        {
            result.push(tmp.top());
            tmp.pop();
        }

        string ans;
        while (!result.empty())
        {
            ans += result.top();
            result.pop();
        }

        reverse(ans.begin(), ans.end());
        cout << ans << '\n';
    }
}
