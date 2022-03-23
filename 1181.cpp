#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b)
{
    if (a.length() == b.length())
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
                return a[i] < b[i];
        }
    }
    return a.length() < b.length();
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    string str;

    vector<string> ar;

    while (t--)
    {
        cin >> str;
        ar.push_back(str);
    }
    sort(ar.begin(), ar.end(), cmp);

    cout << ar[0] << '\n';

    for (int i = 1; i < ar.size(); i++)
    {
        if (ar[i - 1] == ar[i])
            continue;
        cout << ar[i] << '\n';
    }
}