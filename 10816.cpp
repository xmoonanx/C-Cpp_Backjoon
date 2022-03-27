#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define numbe num.begin(), num.end()

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> num;
    vector<int> target;

    int n, m;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        num.push_back(x);
    }

    sort(numbe);

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;

        cout << upper_bound(numbe, y) - lower_bound(numbe, y) << " ";
    }
}