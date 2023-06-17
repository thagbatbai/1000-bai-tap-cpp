#include<iostream>
using namespace std;
int tong( int n){
	long int tong(0);
	for (int i = 0; i <= n; i++){
		tong += i;
	}
	return tong;
}
int main(){
 int n;
 cout << "nhap n = "; cin >> n;
 double sum = 0;
 for (float i = 1.0; i <= n;i++){
 	sum += ( 1.0 / tong(i));
 }

 cout << sum;
return 0;
}

