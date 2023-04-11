//tim kiem nhi phan
#include <iostream>
using namespace std;

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}

int binarySearch(int a[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (a[mid] == x) {
            return mid;
        } else if (a[mid] > x) {
            return binarySearch(a, l, mid - 1, x);
        } else {
            return binarySearch(a, mid + 1, r, x);
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
    int result = binarySearch(a, 0, n - 1, x);
    if (result == -1) {
        cout << "Khong tim thay gia tri " << x << " trong mang." << endl;
    } else {
        cout << "Gia tri " << x << " tim thay tai vi tri " << result << " trong mang." << endl;
    }
    return 0;
}

