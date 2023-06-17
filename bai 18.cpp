#include<iostream>
#include<math.h>
using namespace std;

double giaithua( int n){
	double giaithua(1);
	for ( float i = 1.0; i <=n; i++){
		giaithua *= (i);
	}
	return giaithua;
}
int main(){
 int x,n;
 double sum(1);
 cout << "nhap x = "; cin >> x;
 cout << "nhap n= "; cin >> n;
 
 for ( float i = 2.0; i <= 2*n; i+=2 ){
 	sum += pow ( x,i) / giaithua(i)  ;
 }
 cout << "tong la: " << sum;
return 0;
}

