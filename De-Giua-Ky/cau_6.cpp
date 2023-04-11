//sap xep nhanh
#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}

int partition(int a[], int low, int high) {
    int pivot = a[(low + high) / 2];
    while (low <= high) {
        while (a[low] < pivot) {
            low++;
        }
        while (a[high] > pivot) {
            high--;
        }
        if (low <= high) {
            swap(a[low], a[high]);
            low++;
            high--;
        }
    }
    return low;
}

void quicksort(int a[], int low, int high) {
    if (low < high) {
        int pi = partition(a, low, high);
        quicksort(a, low, pi - 1);
        quicksort(a, pi, high);
    }
}

void XuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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
    quicksort(a, 0, n - 1);
    cout << "mang duoc sap xep thanh : ";
    XuatMang(a, n);
    return 0;
}

