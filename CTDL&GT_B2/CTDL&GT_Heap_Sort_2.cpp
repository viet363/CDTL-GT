//Vi du : sap xep mang theo phuong phap sap xep cay
#include <iostream>
using namespace std;

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu "<<i<<" =";
        cin>>a[i];
    }
}
void heapify(int a[], int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && a[l] > a[largest]) {
        largest = l;
    }

    if (r < n && a[r] > a[largest]) {
        largest = r;
    }

    if (largest != i) {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    for (int i = n - 1; i >= 0; i--) {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
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
	    cout<<"Mang sau khi sap xep:"<<endl;
    heapSort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}