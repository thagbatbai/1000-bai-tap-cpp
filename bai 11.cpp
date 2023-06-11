#include<iostream>
using namespace std;
int main(){
	int n,tong,giaithua;
	tong = 0;
	giaithua = 1;
	cout << "nhap n: "; cin >> n;
	for ( int i = 1; i <= n; i++){
		giaithua *= i;
		tong +=giaithua;
	};
cout << tong;
return 0;
}

