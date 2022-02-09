#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);

    int n;
    deque<int> dq;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        dq.push_back(i);
    }

    while (dq.size() > 1)
    {
        dq.pop_front();
        dq.push_back(dq.front());
        dq.pop_front();
    }

    cout << dq.front();
}
