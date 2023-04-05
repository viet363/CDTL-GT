// Vi du sap xep doi cho truc tiep: sap xep mang 1 chieu 
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
void InterchangeSort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
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
	   InterchangeSort(a,n);
	   for (int i=0; i<n; i++){	
		cout << a[i] << " "; 
	}
}
	
