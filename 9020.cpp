#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int prime[10001];

    for (int i = 0; i < 10001; i++)
    {
        prime[i] = 1;
    }

    prime[0] = 0;
    prime[1] = 0;

    for (int i = 2; i <= sqrt(10000); i++)
    {
        for (int j = i * i; j <= 10000; j += i)
        {
            prime[j] = 0;
        }
    }

    int T;
    cin >> T;
    int n;

    for (int i = 0; i < T; i++)
    {
        cin >> n;
        int p = n / 2;
        int q = n / 2;
        while (1)
        {

            if (prime[p] == 1 && prime[q] == 1)
            {
                cout << p << ' ' << q << '\n';
                break;
            }

            else
            {
                p--;
                q++;
            }
        }
    }
}
