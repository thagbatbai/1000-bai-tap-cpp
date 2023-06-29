#include<iostream>
using namespace std;
bool check( int n){
	if ( n <= 1) return false;
	for ( int i = 2; i <= n/2; i++ ){
		if ( n % i == 0) return false;
	}
	return true;
}
int main(){
	int n;
	cout << "nhap n = "; cin >> n;
	if ( check(n)) cout << n  << " la so nguyen to";
	else cout << n << " khong phai la so nguyen to";
return 0;
}

