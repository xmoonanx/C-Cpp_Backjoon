#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);

   int in, cnt = 0;
   int remain[42] = {0};

   for(int i = 0; i< 10; i++) {
       cin >> in;
       remain[in % 42] = 1;
   }

   for(int i = 0; i<42; i++){
       if(remain[i] == 1) cnt++;
   }

   cout << cnt;

}