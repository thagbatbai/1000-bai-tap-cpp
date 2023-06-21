#include<iostream>
using namespace std;

int main(){
	int n,sum(0);
	do{
		cout << "nhap n = "; cin >> n;
	}while( n < 0);
	for ( int i = 1; i <= n; i++){
		if ( n % i == 0 and i % 2 == 0) sum += i;
	}
	cout << "tong la: " << sum;
return 0;
}

