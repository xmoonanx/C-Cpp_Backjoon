#include <iostream>
using namespace std;

bool han(int n){
    if(n < 100){
        return true;
    }
    int n1, n2, n3;
    n1 = n / 100;
    n2 = n % 100 / 10;
    n3 = n % 10;

    if(n1-n2==n2-n3){
        return true;
    }
    return false;
}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int n, cnt=0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        if(han(i)==true){
            cnt++;
        }
    }
    cout << cnt;
}

// 1 ~ 110까지 한수 : 1~99 : 99개
// 1 ~ 210까지 한수 : 1~99, 111, 123, 135, 147, 159, 210 : 105개
