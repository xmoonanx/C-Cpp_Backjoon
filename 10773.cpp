#include <iostream>
#include <stack>
#include "typeinfo"
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio;

    stack<int> s;
    int k, num, sum = 0;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        cin >> num;
        if (num != 0)
        {
            s.push(num);
        }
        else
        {
            s.pop();
        }
    }

    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        sum += s.top();
        s.pop();
    }
    cout << sum;
}
