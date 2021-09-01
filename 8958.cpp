#include <iostream>
using namespace std;

int main(){
    int num; 
    char rec[80];
    int cnt=0, grd=0;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> rec;
        
        for(int j = 0; j < 80; j++){
            if(rec[j]==0){
                grd = 0;
                break;
            }
            if(rec[j] == 'O'){
                grd += 1;
                cnt += grd;
            }
            else grd = 0;
        }
    cout << cnt << "\n";
    cnt = 0;
    }
}
