#include <iostream>

using namespace std;
struct Honso {
    int Tuso;
    int Mauso;
    int Phannguyen; 
};
void NhapHonso(Honso & HS) {
	cout<<"Nhap phan nguyen:";
    cin>>HS.Phannguyen;
    cout <<"Nhap tu so: ";
    cin >> HS.Tuso;
    cout <<"Nhap mau so: ";
    while (true){
        cin >>HS.Mauso ;
        if (HS.Mauso!= 0) {
        } else {
            cout << "Khong hop le! Nhap lai: ";
        }
        float tam= HS.Tuso/HS.Mauso;
        if (tam <1){
        		break;
		} else{
			 cout << "Khong phu hop dieu kien: ";
		}
    }
}
void XuatHonso(Honso &HS) {
    cout << "Hon so vua nhap la: " <<HS.Phannguyen<<"."<< HS.Tuso << "/" <<HS.Mauso << endl;
}
int main() {
    Honso HS;
    NhapHonso(HS);
    XuatHonso(HS);
}
