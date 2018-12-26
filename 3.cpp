//Напишите программу, позволяющую эффективно проверять принадлежность значений массиву.

#include <iostream>
using namespace std;

int main() {
  int n;
   cin >> n;
int* arr = new int[n];
for (int i = 0; i < n; i++){
  cin >> *(arr + i);
}
int a,b;
cin >> a >> b;
for (int i = 0; i < n; i++){
if (a == *(arr + i)){
  for (int j = 0; j < n; j++){
   if (b == *(arr + j)){
     cout << endl << a << b;
   }
 }
}
else{
break;
} 
}
return 0;
}
