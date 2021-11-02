#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, tmp;
    vector<int> v;
    cin >> n;
    while (n--)
    {
        cin >> tmp;
        v.push_back(-tmp);
    }

    sort(v.begin(), v.end(),;

    for (int i = 0; i < v.size(); i++)
    {
        cout << -v[i] << '\n';
    }
}