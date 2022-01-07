#include <iostream>
using namespace std;
int card[100] = {0};

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio;
    int n, m, result;
    int sum = 0;
    int min = 9999999;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                sum = card[i] + card[j] + card[k];
                if (m - sum < min && m - sum >= 0)
                {
                    min = m - sum;
                    result = sum;
                }
            }
        }
    }
    cout << result;
}