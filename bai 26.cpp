#include<iostream>
using namespace std;

int main(){
	int n,product(1);
	do{
		cout << "nhap n = "; cin >> n;
	}while( n < 0);
	for ( int i = 1; i <= n; i++){
		if ( n % i == 0 and i % 2 != 0) product *= i;
	}
	cout << "tich la: " << product;
return 0;
}

