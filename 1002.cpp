#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int T, result;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        double x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double dx = x1 - x2, dy = y1 - y2;
        double d = sqrt(pow(dx, 2) + pow(dy, 2));
        double sub, add = r1 + r2;

        if (r1 > r2)
            sub = r1 - r2;
        else
            sub = r2 - r1;

        if (d == 0 && sub == 0)
            result = -1;
        else if (d < add && sub < d)
            result = 2;
        else if (d == add || d == sub)
            result = 1;
        else
            result = 0;

        cout << result << '\n';
    }
}