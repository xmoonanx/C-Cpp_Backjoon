#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int r;
    cin >> r;

    double Euc = r * r * M_PI;
    double taxi = r * r * 2.0;

    cout << fixed;
    cout.precision(6);
    cout << Euc << '\n';
    cout << taxi;
}