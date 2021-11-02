#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    vector<string> v;

    for (int i = 0; i < s.size(); i++)
    {
        v.push_back(s.substr(i, s.size()));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
}