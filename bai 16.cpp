#include<iostream>
using namespace std;
double luythua( int x, int n){
	double luythua(1);
	for ( int i = 1; i <= n; i++){
		luythua *= x;
	}
	return luythua;
}
double tong(int n){
	double tong(0);
	for ( int i = 1; i <= n; i++){
		tong +=i;
	}
	return tong;
}
int main(){
 int x,n;
 double sum(0);
 
 cout << "nhap x= "; cin >> x;
 cout << "nhap n= "; cin >> n;
 for(float i = 1.0; i <= n; i++){
 	sum += (luythua(x, i) / tong (i));
 } 
 cout << "ketqua la: " << sum;
 return 0;
}

