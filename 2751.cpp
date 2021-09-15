#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define sor(v) sort((v).begin(), (v).end())

int main()
{
    int n, t;
    vector<int> v;
    cin >> n;
    while (n--)
    {
        cin >> t;
        v.push_back(t);
    }
    sor(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
}