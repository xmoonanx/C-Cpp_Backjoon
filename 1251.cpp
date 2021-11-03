#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s, ans;
int len;

void div(string s, int first, int second)
{
    string a, b, c;
    a = b = c = "";
    for (int i = 0; i <= first; i++)
    {
        a += s[i];
    }
    for (int i = first + 1; i <= second; i++)
    {
        b += s[i];
    }
    for (int i = second + 1; i < s.size(); i++)
    {
        c += s[i];
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(c.begin(), c.end());

    string tmp_ans = a + b + c;

    if (ans == "" || ans > tmp_ans)
        ans = tmp_ans;
    // else
    // {
    //     if (ans > tmp_ans)
    //         ans = tmp_ans;
    // }
}

int main()
{
    cin >> s;
    len = s.length();

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len - 1; j++)
        {
            if (i >= j)
                continue;
            string tmp = s;
            div(tmp, i, j);
        }
    }
    cout << ans << '\n';
}