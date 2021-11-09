#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int apl[26] = {0}, cnt = 0;

    // for (int i = 0; i < 26; i++)
    // {
    //     apl[i] = 0;
    // }

    for (int i = 0; i < s.size(); i++)
    { //문자 갯수
        apl[s[i] - 'A']++;
    }

    vector<char> vec;
    vector<char> mid;

    for (int i = 0; i < 26; i++)
    {
        if (apl[i] % 2 == 1)
        {
            mid.push_back(i + 'A');
            cnt++;
        }
    }

    if (cnt > 1) //홀수가 2개 이상
    {
        cout << "I'm Sorry Hansoo";
    }

    else
    {
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < apl[i] / 2; j++)
            {
                vec.push_back(i + 'A');
                cout << vec[vec.size() - 1];
            }
        }

        if (mid.size())
        {
            cout << mid[0];
        }

        for (int i = vec.size() - 1; i >= 0; i--)
        {
            cout << vec[i];
        }
    }
}
