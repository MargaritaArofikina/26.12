// Напишите программу, находящую k-ую порядковую статистику.

#include <iostream>
using namespace std;

int main() {

int n,k;
cin >> n >> k;
int * arr = new int [n];
for (int i = 0; i < n; i++){
  cin >> *(arr + i);
}

int j = 0;
for (int j = 0; j < n; j++){   // сортировка
for (int i = 1; i < n; i++){
if (*(arr + i) < *(arr + i - 1)){
  int s = *(arr + i - 1);
  *(arr + i - 1) = *(arr + i);
  *(arr + i) = s;
}
}
}

cout << *(arr + k);

  return 0;
}
