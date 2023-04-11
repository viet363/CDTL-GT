//sap xep tang dan
#include <iostream>
using namespace std;

void NhapMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}
void sapXepTangDan(float a[], int n) {
    if (n <= 1) {
        return;
    }
    sapXepTangDan(a, n-1);
    float key = a[n-1];
    int j = n-2;
    while (j >= 0 && a[j] > key) {
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = key;
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
    sapXepTangDan(a, n);
    cout << "Mang sau khi sap xep tang dan: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}

