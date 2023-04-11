// Ham de quy dem so luong gia tri duong trong mang
#include <iostream>
using namespace std;

void NhapMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}
int DemDuong(float a[], int n, int i = 0, int dem = 0) {
    if (i < n) {
        if (a[i] > 0) {
            dem++;
        }
        return DemDuong(a, n, i+1, dem);
    }
    return dem;
}

int main() {
       int n; 
    do
    {
        cout<<"Nhap so phan tu mang:";
        cin>>n;
    } while (n <= 0  );
	    float a[n];
	    NhapMang(a,n);
    int dem = DemDuong(a, n);
    cout << "So luong gia tri duong trong mang: " << dem << endl;
    return 0;
}

