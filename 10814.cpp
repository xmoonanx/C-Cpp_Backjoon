#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, pair<int, string>>> v;
    int age, i = 1;
    string name;
    while (n--)
    {
        cin >> age >> name;
        v.push_back({age, {i, name}});
        i++;
    }

    sort(v.begin(), v.end());

    for (int j = 0; j < v.size(); j++)
    {
        cout << v[j].first << " " << v[j].second.second << "\n";
    }
}