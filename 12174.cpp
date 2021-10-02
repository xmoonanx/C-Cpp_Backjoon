#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int B;
        string s;
        cin >> B >> s;
        cout << "Case #" << i << ": ";
        for (int j = 0; j < B * 8; j += 8)
        {
            int t = 0;
            for (int k = 0; k < 8; k++)
            {
                if (s[j + k] == 'I')
                {
                    t += 1 << 7 - k;
                }
            }
            cout << char(t);
        }
        cout << "\n";
    }
}