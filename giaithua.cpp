#include <iostream>
using namespace std;

long Giaithua(int n){
	if(n==0 ||n==1)
		return 1;
	return n*Giaithua(n-1);
}
int main (){
	int n;
	long Gt;
	cout<<"Nhap n=";
	cin>>n;
	Gt = Giaithua(n);
	cout<<"Giai thua cua "<<n<<"="<<Gt;
}
