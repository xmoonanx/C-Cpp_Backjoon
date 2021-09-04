#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum = 0; 
    char c;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> c;
        sum += (c - '0'); // ASCII Code에서 '0'은 10진수로 48이다. 즉 '0' = 48이므로 48을 뺴주면 int 값으로 변환된다.
    }
    cout << sum;
}
