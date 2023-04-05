//Vi du: sap xep mang 1 chieu bang phuong phap chon truc tiep
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
void SelectionSort(int a[], int n){
	for (int i = 0; i < n - 1; i++)	{
		int min = i;
		for (int j = i + 1; j < n; j++)
			if (a[min]>a[j])
				min = j;
			swap(a[i], a[min]);
	}
}
int main(){
    int n;
    do
    {
        cout<<"Nhap so phan tu mang:";
        cin>>n;
    } while (n <= 0  );
	    int a[n];
	    NhapMang(a,n);
	    cout<<"Mang sau khi sap xep:"<<endl;
	   SelectionSort(a,n);
	   for (int i=0; i<n; i++){	
		cout << a[i] << " "; 
	}
}
