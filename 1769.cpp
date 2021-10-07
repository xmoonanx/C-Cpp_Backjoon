#include <iostream>
using namespace std;

string changeNum(string n)
{
    int sum = 0;
    for (int i = 0; i < n.length(); i++)
        sum += n[i] - '0';

    return to_string(sum);
}

int main()
{
    string x;
    int cnt = 0;
    int sum = 0;
    cin >> x;
    while (x.length() != 1)
    {
        x = changeNum(x);
        cnt++;
    }
    sum = stoi(x); // std::stoi == string to int;

    cout << cnt << "\n";
    if (sum % 3 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}