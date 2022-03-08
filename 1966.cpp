#include <iostream>
#include <deque>
using namespace std;

int main()
{

    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        deque<int> d;

        int imp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> imp;
            d.push_back(imp);
        }

        int p = m;
        int cnt = 0;
        while (1)
        {
            int i = 0;
            for (i = 0; i < d.size(); i++)
            {
                if (d[i] > d[0])
                {
                    d.push_back(d[0]);
                    d.pop_front();
                    if (p == 0)
                        p = d.size() - 1;
                    else
                        p--;

                    break;
                }
            }
            if (i != d.size())
                continue;

            if (p == 0)
            {
                cnt++;
                break;
            }
            else
            {
                d.pop_front();
                cnt++;
                p--;
            }
        }
        cout << cnt << '\n';
    }
}
