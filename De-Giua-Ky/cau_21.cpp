//tinh giai thua
#include <iostream>
using namespace std;

int giaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * giaiThua(n - 1);
    }
}

int main() {
    int n = 5;
    cout << "T(" << n << ") = " << giaiThua(n) << endl;
    return 0;

