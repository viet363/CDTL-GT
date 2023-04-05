//vi du ve  tim kiem tuyen tinh : tim x trong mang 1 chieu
#include <iostream>

using namespace std;

#define  Max100
void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu "<<i<<" =";
        cin>>a[i];
    }
}
int LS(int a[], int n, int x){
    for(int i = 0; i < n; i++)
        if (a[i] == x)
            return i;
    return -1;
}
int main()
{
    int n,x;
    do
    {
        cout<<"Nhap so phan tu mang:";
        cin>>n;
    } while (n <= 0  );
	    int a[n];
	    NhapMang(a,n);
	
	cout << "Nhap x muon tim vi tri: "; 
	cin >> x;
	cout <<"vi tri so  "<<x<<" la "<<LS(a,n,x);
} 
