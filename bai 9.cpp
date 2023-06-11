#include<iostream>
using namespace std;

int main(){
int n,dem;
dem = 1;
cout << "nhap n; ";cin >>n;
for ( int i = 1;i<=n;i++){
	dem =  dem*i;
};
cout <<"tong la: " << dem;
return 0;
}

