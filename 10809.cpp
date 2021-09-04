#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    int apl[26];
    string s;
    
    cin >> s;

    for(int i =0; i < 26; i++){
        apl[i] = -1; //모든 알파벳 위치 값을 -1로 저장
    }

    for(int i = 0; i< s.size(); i++){
        if(apl[(int)s[i]-'a']<0) apl[(int)s[i]-'a'] = i; //입력 받은 문자열의 알파벳들의 시작 인덱스 값을 저장
    }

      for(int i =0; i < 26; i++){
        cout << apl[i] << ' ';
    }
}

