#include<iostream>
#include<math.h>
using namespace std;
int luythua( int x, int n){
  	int luythua = 1;
  	while (n>0){
		luythua *= x;
		n--;
}return luythua;
}
int main(){
 	int x,n;
 	cin >> x;
 	cin >> n;
  	cout << luythua(x,n);
 	return 0;
}

