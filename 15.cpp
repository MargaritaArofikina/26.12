//Дано множество точек на плоскости. Напишите программу, находящую среди этих 2, расстояние между которыми - наименьшее.

#include <iostream>
#include <cmath>
using namespace std;

double s(double x1,double y1,double x2,double y2){
	double dx=x1-x2;
	double dy=y1-y2;
	double k = sqrt(dx*dx + dy*dy );
	return k;
}


int main(){
int n;
cin >> n;

double dX[n];
double dY[n];

for (int i = 0; i < n; i++)
cin >> dX[i] >> dY[i];

double c = 0;
double cmin = s(dX[1],dY[1],dX[2],dY[2]);
for (int i = 0 ; i < n;i++){

for (int j=i+1;j<n;j++){
    
	c=s(dX[j],dY[j],dX[i],dY[i]);
	if (cmin>c){
	cmin=c;
}
}
}
cout << cmin;

return 0;
}
