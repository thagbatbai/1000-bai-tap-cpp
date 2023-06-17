#include<iostream>
using namespace std;
double giaithua( int n){
	double giaithua(1);
	while ( n >0 ){
		giaithua *= n;
		n--;
	}
	return giaithua;
}
long long luythua( int x, int n){
	long int luythua(1);
	for ( int i = 1; i <= n; i++ ){
		luythua*= x;
	}
	return luythua;
}
int main(){
 int x,n;
 double sum(0);
 
 cout << "nhap x= "; cin >> x;
 cout << "nhap n = "; cin >> n;
 
 for ( float i = 1.0; i <= n; i++){
 	sum += luythua( x, i) / giaithua(i);
 }
 cout << sum;
return 0;
}

