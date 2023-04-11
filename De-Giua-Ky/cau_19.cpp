//tim gia tri lon nhat
#include <iostream>
using namespace std;

void NhapMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}
float timMax(float a[], int n) {
    if (n == 1) {
        return a[0];
    }
    return max(a[n-1], timMax(a, n-1));
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
    float maxVal = timMax(a, n);
    cout << "Gia tri lon nhat trong mang la: " << maxVal << endl;
    return 0;
}

