#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        if (str.length() != 7)
            cout << 0;

        else
        {

            if (str[0] == str[1] && str[1] == str[4] && str[2] == str[3] && str[3] == str[5] && str[5] == str[6] && str[0] != str[2])
            {
                cout << 1;
            }
            else
                cout << 0;
        }
        cout << "\n";
    }
}