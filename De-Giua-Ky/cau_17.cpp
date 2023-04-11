//tinh tong
#include <iostream>

using namespace std;

#define Max100

void NhapMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}
int Tong(float a[], int n, int i=0,float tong =0)
{ 	
	if(i>=n){
		return tong;
		}
	tong +=a[i];
	return Tong(a,n,++i,tong) ;
}
int main()
{
    int n; 
    do
    {
        cout<<"Nhap so phan tu mang:";
        cin>>n;
    } while (n <= 0  );
	    float a[n];
	    NhapMang(a,n);
    cout<<"Tong cac so trong mang ="<<Tong(a, n);
}
