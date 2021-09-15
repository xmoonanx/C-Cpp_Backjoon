#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
#define sor(v) sort((v).begin(), (v).end())

int main()
{
    cin.tie(NULL);
    cout.tie(NULL); // printf랑 scanf 못쓰는 대신 cin, cout 속도 up

    int num;
    cin >> num;
    vector<pair<int, int>> v;
    int x, y;
    for (int i = 0; i < num; i++)
    {
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < num; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
    return 0;
}