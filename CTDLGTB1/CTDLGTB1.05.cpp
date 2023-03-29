# include <iostream>
#define  Max100

using namespace std;

void NhapMang(float a[], int n)
{
    for (int i = 0; i < n; i++)
    { 	cout<<"phan tu thu  "<<i<<"=";
        cin>>a[i];
    }
}

int DemSoDuong( float a[], int n,int i=0,int dem=0 )
{
   if(i>=n)
        return dem;
    if(a[i]>0){
        dem++;
    }
    return DemSoDuong(a,n,++i,dem);
}
int main()
{
    int n; 
    do
    {
        cout<<"Nhap so phan tu mang:";
        cin>>n;
    } while (n <= 0  );
	    float a[n];
	    NhapMang(a,n);
    cout<<"So phan tu co gia tri duong ="<<DemSoDuong(a,n);
}

