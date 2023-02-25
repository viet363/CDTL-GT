
#include <iostream>

using namespace std;

struct PhanSo {
    int Tuso;
    int Mauso;
};

void NhapPhanSo(PhanSo &PS) {
    cout << " Nhap tu so: ";
    cin >> PS.Tuso;
    cout << "Nhap mau so: ";
    while (true){
        cin >>PS.Mauso ;
        if (PS.Mauso!= 0) {
        	break;
        } else {
            cout << "Khong hop le! Nhap lai: ";
        }
    }
}

void XuatPhanSo(PhanSo &PS) {
    cout << "Phan so vua nhap la: " << PS.Tuso << "/" <<PS.Mauso << endl;
}

int main() {
    PhanSo PS;
    NhapPhanSo(PS);
    XuatPhanSo(PS);
    return 0;
}

