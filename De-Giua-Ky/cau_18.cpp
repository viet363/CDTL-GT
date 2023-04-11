// kiem gia tri am 
#include <iostream>
using namespace std;

void NhapMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}
bool kiemTraToanAm(float a[], int n) {
    if (n == 1) {
        return a[0] < 0;
    }
    return a[n-1] < 0 && kiemTraToanAm(a, n-1);
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
    bool toanAm = kiemTraToanAm(a, n);
    if (toanAm) {
        cout << "Mang toan gia tri am." << endl;
    } else {
        cout << "Mang khong toan gia tri am." << endl;
    }
    return 0;
}

