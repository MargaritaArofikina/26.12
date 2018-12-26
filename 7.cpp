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
    if (n%k < 10){
  *(arr + i) = n%k;
    }
    if (n%k >10){
        char * c = new char [20];
        for(char i = 'a'; i <= 't'; i++){
            int f = n%k;
           f -=9;
           char g = *(c + (f));
        
           *(arr + i) = g;
        }
        
    }
  n /= k;
    
}

for (int i = amount - 1; i >=0; i--){
  cout << *(arr + i);
}

    
  return 0;
}
