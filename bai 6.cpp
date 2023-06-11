#include<iostream>
using namespace std;
int main(){
float tong;
int n;
tong = 0;
cin >>n;
for (float i = 1.0;i<=n;i++){
	tong += 1.0/(i*(i+1));
}
cout << tong;
return 0;
}

