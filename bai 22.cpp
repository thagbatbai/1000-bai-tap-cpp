#include<iostream>
using namespace std;

int main(){
	int n, sum(1);
	
	cout << "nhap n= "; cin >> n;
	for ( int i = 1; i<=n;i++){
		if ( n % i == 0) sum *= i;
	}
	cout << " tich cac uoc so cua n la: " << sum;
return 0;
}

