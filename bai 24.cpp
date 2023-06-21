#include<iostream>
using namespace std;

int main(){
	int n;
	cout << "nhap n= "; cin >> n;
	for( int i = 1; i <= n; i++){
		if( n % i == 0 and i % 2 != 0) cout << i << " ";
	}	
return 0;
}

