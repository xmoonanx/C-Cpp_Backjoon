#include <iostream>
#include <string>
using namespace std;

int main(){
    int num; 
    string rec;
    int cnt=0, grd=0;

    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> rec;
        
        for(int j = 0; j < rec.length(); j++){
            if(rec[j] == 'O'){
                grd++;
            }
            else grd = 0;
            cnt += grd;
        }
    cout << cnt << "\n";
    cnt = grd = 0;
    }
}
