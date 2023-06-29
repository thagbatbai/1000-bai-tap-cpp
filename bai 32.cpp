#include<iostream>
#include<math.h>
using namespace std;
bool check( int n){
	if ( n <= 1) return false;
	if( sqrt(n) * sqrt(n) == n ) return true;
	return false; 
}
int main(){
	int n;
	cout << "nhap n= "; cin >> n;
	if ( check ( n)) cout << n << " la so chinh phuong!";
	else cout << n << " khong phai la so chinh phuong!";
return 0;
}

