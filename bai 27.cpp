#include<iostream>
using namespace std;

int main(){
	int n,dem(0);
	cout << "nhap n= "; cin >> n;
	for( int i = 1; i <= n; i++){
		if( n % i == 0 and i % 2 == 0) dem += 1;
	}	
	cout << " so luong uoc so chan cua n la: " << dem;
return 0;
}

