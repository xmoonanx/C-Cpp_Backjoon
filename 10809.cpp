#include <iostream>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    int apl[26];
    string s;
    
    cin >> s;

    for(int i =0; i < 26; i++){
        apl[i] = -1; //��� ���ĺ� ��ġ ���� -1�� ����
    }

    for(int i = 0; i< s.size(); i++){
        if(apl[(int)s[i]-'a']<0) apl[(int)s[i]-'a'] = i; //�Է� ���� ���ڿ��� ���ĺ����� ���� �ε��� ���� ����
    }

      for(int i =0; i < 26; i++){
        cout << apl[i] << ' ';
    }
}

