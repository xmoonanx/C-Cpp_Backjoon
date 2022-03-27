#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    string tag;

    getline(cin, str);
    getline(cin, tag);

    int ans = 0;
    int tagLen = tag.length();
    if (str.length() < tagLen)
        cout << 0;

    else
    {
        for (int i = 0; i <= str.length() - tagLen; i++)
        {
            if (str[i] == tag[0])
            {
                string sub = str.substr(i, tagLen);
                if (sub == tag)
                {
                    ans++;
                    i += tagLen - 1;
                }
            }
        }
        cout << ans;
    }
}