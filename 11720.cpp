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
        sum += (c - '0'); // ASCII Code���� '0'�� 10������ 48�̴�. �� '0' = 48�̹Ƿ� 48�� ���ָ� int ������ ��ȯ�ȴ�.
    }
    cout << sum;
}
