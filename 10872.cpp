#include <iostream>
using namespace std;

// int main()
// {
//     int n, result = 1;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         result *= i;
//     }
//     cout << result;
// }

int fac(int n)
{
    int result = 1;
    if (n < 2)
        return result;
    else
    {
        n *= fac(n - 1);
        return n;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fac(n);
}