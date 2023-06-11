#include<iostream>
using namespace std;

int main(){
 float n, dem;
 dem = 0;
 cout << "nhap n: "; cin >>n;
 for (float i = 0; i <= n; i++){
 	dem += 1/((2*i)+1);
 };
 cout << "tong la: " << dem;
return 0;
}

