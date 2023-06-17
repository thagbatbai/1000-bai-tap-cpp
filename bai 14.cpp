#include <iostream>
#include <math.h>

using namespace std;
int luythua( int x, int n){
	long long luythua(1);
	for ( int i = 1; i <= n; i++){
		luythua *= x;
	}
	return luythua;
}
int main()
{
	int x,n,sum(0);
	cout << "nhap x = "; cin >> x;
	cout << "nhap n = "; cin >> n;
	
	for(int i = 1; i <= n; i+=2){
		sum += luythua(x, i);
	}
	cout << sum;
	return 0;
}

