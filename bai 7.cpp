#include<iostream>
using namespace std;

int main(){
float n,dem;
dem = 0;
cout << "nhap n ";cin >>n;
for ( float i = 0;i<=n;i++){
	dem += i/(i+1);
};
cout <<"tong la: " << dem;
return 0;
}

