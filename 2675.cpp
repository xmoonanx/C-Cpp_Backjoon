#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

   for(int i = 0; i<T; i++){
       int R;
       string S;
       cin >> R >> S;
       string P;
       for(int j = 0; j< S.size(); j++){
           for(int k= 0; k < R; k++){
               P += S[j];
           }
       }
       cout << P << '\n';
   }
}