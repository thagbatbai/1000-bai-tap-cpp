#include<iostream>
using namespace std;

int main(){
	int n,sum(0);
	cout << " nhap n = "; cin >> n;
	for ( int i = 1; i < n; i++){
		if ( n % i == 0 ) sum += i;
	}
	cout << "tong la: " << sum;
return 0;
}

