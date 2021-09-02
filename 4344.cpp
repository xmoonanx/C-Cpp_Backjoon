#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int Line, Sdt;
    int grd[1000] = {0};

    cin>>Line;

    for(int i =0; i<Line; i++){
        cin>>Sdt;
        int avg = 0, sum =0,cnt = 0;;
        double result =0;
        for(int j = 0; j<Sdt; j++){
            cin >> grd[j];
            sum += grd[j];
        }

        sum = sum / Sdt;

        for(int k = 0; k<Sdt; k++){
            if(grd[k]>sum){
                cnt++;
            }
        }
        result = (double)cnt / Sdt * 100;
        cout << fixed;
        cout.precision(3);
        cout << result << "%" <<'\n'; 
    }
    
}