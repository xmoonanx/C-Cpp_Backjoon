#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    //string result;

    cin >> s;

    int apb[26], cnt = 0;

    for (int i = 0; i < 26; i++)
        apb[i] = 0; //갯수 초기화

    for (int i = 0; i < s.size(); i++)
    { //갯수 세기
        apb[s[i] - 'A']++;
    }

    vector<char> vec;
    //vector<pair<char, int>> v;
    vector<char> M; //가운데

    for (int i = 0; i < 26; i++)
    { //홀수인 경우
        if (apb[i] % 2 == 1)
        {
            M.push_back('A' + i);
            cnt++;
        }
    }

    if (cnt > 1)
    { //홀수가 2개 이상인 경우
        cout << "I'm Sorry Hansoo";
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < apb[i] / 2; j++)
            {
                // v.push_back({ 'A' + i, apb[i] - 1 });
                // result += v[i].first;
                vec.push_back('A' + i);
                cout << vec[vec.size() - 1];
            }
        }

        if (M.size())
        {
            // result += M[0];
            cout << M[0];
        }

        for (int i = vec.size() - 1; i >= 0; i--)
            cout << vec[i];

        // for (int i = 25; i >= 0; i--) {
        //     for (int j = 0; j < apb[i] / 2; j++) {
        //         v.push_back({ 'A' + i, apb[i] });
        //         result += v[i].first;
        //     }
        // }

        // cout << result;
    }
    return 0;
}