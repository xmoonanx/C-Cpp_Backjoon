#include <iostream>
using namespace std;

bool num[10001]; //bool : only have 1(ture) and 0(false) (C++에서는 typedef 없이 bool 자료형을 쓸 수 있다.)

int d(int n){
    int temp;
    temp = n + n / 1000 + n % 1000 / 100 + n % 100 / 10 +  n % 10;
    return temp;
}

void self_number(){
    int temp;
    num[1] == false;
    for (int i = 0; i< 10000; i++){
        if(i < 10000){
            temp = d(i);
            if(temp < 10000)
                num[temp] = true;
        }
    }
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    self_number();
    for(int i = 0; i < 10000; i++){
        if(!num[i]){
            cout << i << '\n';
        }
    }
}
// 02 -> 01 + 0 + 1 = 02 : 02 생성자는 01
// 33 -> 30 + 3 + 0 = 33 : 33 생성자는 33
