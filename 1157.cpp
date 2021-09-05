#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);

    int apl[26] = {0,};
    int cnt = 0; 
    int MAX_cnt = 0;
    int index = 0;

    string s;
    cin >> s;

    for(int i =0; i < s.size(); i++){
        int n = s[i];

        if(n < 97) apl[n -65]++;
        else apl[n - 97]++;
    }

    for(int i = 0; i<26; i++){
        if(apl[i] > MAX_cnt){
            MAX_cnt = apl[i];
            index = i;
        }
    }

    for(int i = 0; i<26; i++){
        if(apl[i] == MAX_cnt){
            cnt++;
            if(cnt >= 2){

                cout << "?";
                return 0;
            }
        }
    }

    cout << (char)(index+65);
}