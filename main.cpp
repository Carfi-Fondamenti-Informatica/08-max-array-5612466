#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int a;
    cin >> a;
    float numeri[a];
    for (int i = 0; i < a; i++) {
        cin >> numeri[i];
    }
    cout << max(numeri, a);
  return 0;
}
