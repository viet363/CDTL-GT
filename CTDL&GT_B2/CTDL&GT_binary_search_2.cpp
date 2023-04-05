//vi du ve  tim kiem nhi phan: tim x trong mang 1 chieu
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

int BS(int a[], int n, int x)
{
	int l = 0, r = n-1;	
	while (l < r){
		int mid = (l+r)/2;
		if (a[mid] < x){
			l = mid+1;
		}		
		else{
			r = mid;
		}
	}	
	if (a[l] == x)
		return l;	
	return -1;
}
int main()
{
    int n,x;
    do
    {
        cout<<"Nhap so phan tu mang:";
        cin>>n;
    } while (n <= 0  );
	    int a[n];
	    NhapMang(a,n);
	
	cout << "Nhap x muon tim vi tri: "; 
	cin >> x;
	cout <<"vi tri so  "<<x<<" la"<< BS(a, n, x);
} 
 
