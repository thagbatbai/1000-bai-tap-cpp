#include<iostream>
using namespace std;

int main(){
  float n,dem;
  cout << "nhap n: "; cin >> n;
  dem = 0;
  for (float i = 0; i <= n; i++){
  	dem+= 1/(i + 1);
  };
  cout<<"tong la:  " << dem;
return 0;
}

