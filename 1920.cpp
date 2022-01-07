#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
int arr[100000];

void binsearch(int num)
{
    int start = 0;
    int mid;
    int end = n - 1;

    while (end >= start)
    {
        mid = (start + end) / 2;
        if (arr[mid] == num)
        {
            cout << 1 << '\n';
            return;
        }
        else if (arr[mid] > num)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << 0 << '\n';
    return;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio;

    int num;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> num;
        binsearch(num);
    }
    return 0;
}