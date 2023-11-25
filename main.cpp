#include <iostream>
using namespace std;

void hitungPecahanMinimal(int nilai) {
    int pecahan[] = {100, 50, 20, 10, 5, 2, 1};
    int jumlahPecahan = sizeof(pecahan) / sizeof(pecahan[0]);

    cout << "Pecahan yang digunakan: " << endl;

    for (int i = 0; i < jumlahPecahan; i++) {
        while (nilai >= pecahan[i]) {
            cout << pecahan[i] << " ";
            nilai -= pecahan[i];
        }
    }
    cout << endl;
}

int main() {
    int nilai;
    cout << "Masukkan nilai total uang: ";
    cin >> nilai;

    cout << "Jumlah pecahan minimal: ";
    hitungPecahanMinimal(nilai);
    return 0;
}
