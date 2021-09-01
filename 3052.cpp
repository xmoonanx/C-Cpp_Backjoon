#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

    int in, result = 0;
    int remainder[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> in;
        remainder[i] = (in % 42);
        
    }

    for(int i = 0; i < 10; i++) {
        int cnt = 0;
        for(int j = i+1; j < 10; j++){
            if(remainder[i] == remainder[j]) cnt++;
        }
        if (cnt == 0) result++;
    }

    cout << result;
}