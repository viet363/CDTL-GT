//Viet ham de quy tinh tong cua bieu thuc sau day: S(x, n) = x + x^2/2! + x^3/3! + … + x^n/n!					
#include <cmath>
#include <iostream>

using namespace std;

int GiaiThua(int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return GiaiThua(n - 1) * n;
}

double Tong(int x, int n, double S = 0) {
    if (n == 0) {
        return S;
    } else
        S += (pow(x,n))/ giaiThua(n);

    return Tong(x,n - 1, s);
}

int main() {
    int x, n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    cout<<"S("<<x<<","<<n<<") ="<<tong(x,n);
}
