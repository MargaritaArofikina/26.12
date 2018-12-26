//Напишите программу, находящую разложение целого числа в сумму точных квадратов, так, чтобы количество слагаемых было минимальным.

#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    int *arr = new int[n];
    for (int i = 1; i < n; i++) {
        *(arr + i) = -1;
    }
    
    for (int i = 1; i < n; i++) {
        if (i * i > n)
            break;
        *(arr + i) = i * i;
    }
    
    int t = 0,q =0;
    for (int i = n - 1; i > 0; i--) {
        if (*(arr + i) != -1) {
            if (q + *(arr + i) <= n) {
                while (t + q <= n) {
                    t += *(arr + i);
                }
                t -= *(arr + i);
                q += t;
                cout << t;
            }
        }
        t = 0;
    }
    return 0;
}
