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
        apb[i] = 0; //���� �ʱ�ȭ

    for (int i = 0; i < s.size(); i++)
    { //���� ����
        apb[s[i] - 'A']++;
    }

    vector<char> vec;
    //vector<pair<char, int>> v;
    vector<char> M; //���

    for (int i = 0; i < 26; i++)
    { //Ȧ���� ���
        if (apb[i] % 2 == 1)
        {
            M.push_back('A' + i);
            cnt++;
        }
    }

    if (cnt > 1)
    { //Ȧ���� 2�� �̻��� ���
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