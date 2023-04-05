// de quy tuyen tinh
//https://freetuts.net/de-quy-tuyen-tinh-2946.html

#include <iostream>
using namespace std;
 
int factorial(int n){
  if(n == 0) return 1;
  return n * factorial(n-1);
}
int main() {
  int n;
  	cout<<"giai thua cua:";
	cin>>n;
  int kq = factorial(n);
  cout<<n<<"!= "<<kq;
}
