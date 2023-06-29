#include<iostream>
using namespace std;

int main(){
	int n,max;
	cout << "nhap n = "; cin >> n;
	for ( int i = 1; i<=n; i++){
		if( n % i == 0 and i % 2 != 0){
			if ( i > max) max = i;
		}
	}
	cout << "uoc le lon nhat la: " << max;
return 0;
}

