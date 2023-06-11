#include<iostream>
using namespace std;

int main(){
	int x,n;
	int sum = 0;
	int luythua(1);
	cin >> x;
	cin >> n;
	for(int i = 1; i <= n; i+=2){
		luythua *= x*x;
		sum += luythua;
	};
	cout << sum;
return 0;
}
