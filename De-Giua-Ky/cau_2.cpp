//tim kiem tuyen tinh
#include <iostream>
using namespace std;

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}

int linearSearch(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
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
    int x = 10;
    int result = linearSearch(a, n, x);
    if (result == -1) {
        cout << "Khong tim thay gia tri " << x << " trong mang." << endl;
    } else {
        cout << "Gia tri " << x << " tim thay tai vi tri " << result << " trong mang." << endl;
    }
    return 0;
}

