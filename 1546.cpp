#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int num, i;
    double grade[1000], max = 0, avg = 0;
    cin >> num;
    for(i = 0; i < num; i++){
        cin >> grade[i];

        if(max<grade[i]) max = grade[i];
    }

    for(i = 0; i < num; i++){
        grade[i] = grade[i] / max * 100;
        avg += grade[i];
    }
    avg /= (double)num;

    cout << avg;
}