#include <iostream>
using namespace std;

long tinhXn(int);
long tinhYn(int);

long tinhXn(int n)
{
    if(n == 0)
        return 1;
    return tinhXn(n - 1) + tinhYn(n - 1);
}

long tinhYn(int n)
{
    if(n == 0)
        return 0;
    return 3*tinhXn(n - 1) + 2*tinhYn(n - 1);
}
int main()
{
    int n;
    cout<<"Nhap n= ";
	cin>>n;
    long kq1 = tinhXn(n);
    long kq2 = tinhYn(n);

   	cout<<"X(n) ="<<kq1<<endl<<"Y(n) ="<< kq2;

    return 0;
}
