#include<iostream>
using namespace std;
int main(){
	int x,n;
	int sum = 0;
	int luythua(1);
	cin >> x;
	cin >> n;
	for ( int i = 1; i <= n; i++){
		luythua *= x;
		sum += luythua;
	};
	cout << sum;
return 0;
}

