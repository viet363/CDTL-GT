//de quy duoi
//https://freetuts.net/de-quy-duoi-tail-recursion-2951.html

#include <iostream>
using namespace std;
 
int UCLN(int m, int n){
  int r;
  if(m<n) return UCLN(n,m);
  r = m % n;
  if(r == 0) return n;
  else return UCLN(n,r);
}
 
int main() {
  int kq,m,n;
  cout<<"Nhap m: ";
  cin>>m;
  cout<<"Nhap n: ";
  cin>>n;
  kq = UCLN(m,n);
  cout<<"Ket qua: "<<kq;
}
