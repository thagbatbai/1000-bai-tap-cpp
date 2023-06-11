#include<iostream>
using namespace std;

int main(){
	int n,dem;
	cout <<"nhap n: " ; cin >> n;
	dem = 0;
   for (int i = 0; i <= n; i++){
   	dem += i;
   };
   cout << "tong la: " << dem;
return 0;
}

