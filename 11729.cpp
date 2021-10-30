#include <iostream>
#include <cmath>
using namespace std;

void Hanoi(int n, int from, int to, int by)
{
    if (n == 1)
    {
        cout << from << " " << to << '\n';
    }
    else
    {
        Hanoi(n - 1, from, by, to);
        cout << from << " " << to << '\n';
        Hanoi(n - 1, by, to, from);
    }
}

int main()
{
    cin.tie(0);
    cout.tie(0);

    int n;

    cin >> n;
    cout << (int)pow(2, n) - 1 << '\n';
    Hanoi(n, 1, 3, 2);
}