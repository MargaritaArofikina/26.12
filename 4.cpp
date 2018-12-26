//Реализуйте вычисление значения полинома в точке посредством схемы Горнера.

#include <iostream>
using namespace std;

int main(){
    
	unsigned long long int n, x;
	cin >> n >> x;
	long long int* arr = new long long int[n + 1];
	for (unsigned long long int i = 0; i < n + 1; i++)
	{
		cin >> *(arr + i);
	}

	long long int b = *(arr + n);
	for (unsigned long long int i = n - 1; i >= 1; i--)
		b = *(arr + i) + b * x;
	cout << *(arr + 0) + b * x;
	
	return 0;
}
