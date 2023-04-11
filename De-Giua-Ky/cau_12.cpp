//in mang
#include <iostream>
using namespace std;

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}

void XuatMang(int a[], int n) {
    if (n == 0) {
        return;
    }
    cout << a[0] << " ";
    XuatMang(a+1, n-1);
}

int main() {
    int n; 
    do
    {
        cout<<"Nhap so phan tu mang:";
        cin>>n;
    } while (n <= 0  );
	    int a[n];
	    NhapMang(a,n);
    cout << "Mang a: ";
    XuatMang(a,n);
    return 0;
}



