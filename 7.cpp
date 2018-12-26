//Напишите программу, переводящую число в систему счисления с основанием k.

#include <iostream>
using namespace std;

int main() {

int n,k;
cin >> n >> k;

int amount = 0;    //количество цифр в записи данной системы счисления
for (int i = k; i < n; i*=k){
  amount ++;
}
amount ++;

int*arr = new int [amount];
for (int i = 0; i < amount; i++){
  *(arr + i) = n%k;
  n /= k;
}

for (int i = amount - 1; i >=0; i--){
  cout << *(arr + i);
}
  return 0;
}
