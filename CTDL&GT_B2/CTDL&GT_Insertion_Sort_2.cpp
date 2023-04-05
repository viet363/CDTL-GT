// Vi du:Sap xep mang 1 chieu bang phuong phap chen truc tiep
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
void InsertionSort(int a[], int n){
	int pos, i;
	int x;
	for(i=1; i<n; i++){
		x = a[i]; 
		pos = i-1;
		while((pos>=0)&&(a[pos]>x)){
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
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
	   InsertionSort(a,n);
	   for (int i=0; i<n; i++){	
		cout << a[i] << " "; 
	}
}
