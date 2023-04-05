// de quy tuong ho 
//https://alpha9999.forumvi.com/t96-topic

#include<iostream>
using namespace std;

/*De quy tuong ho*/
/*X(0)=1, Y(0)=1
  X(n) = X(n-1)+Y(n-1)
  Y(n) = X(n-1)*Y(n-1)
*/
long int Y(int n);
long int X(int n) {
   if(n==0)
      return 1;
   else
      return X(n-1) + Y(n-1);      
}
long int Y(int n) {
   if(n==0)
      return 1;
   else
      return X(n-1)*Y(n-1);      
}
/*Chuong trinh chinh*/
int main(){
   int n;
   cout<<"Nhap n = ";
   cin>>n;
   cout<<"x("<<n<<") = "<<X(n);
   cout<<"Y("<<n<<") = "<<Y(n);
   return 0;
}
