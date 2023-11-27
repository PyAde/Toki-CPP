#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;

    char combined[100]; // Menggunakan array karakter dengan ukuran yang mencukupi
    strcpy(combined, a.c_str()); // Menyalin isi string a ke array karakter combined
    strcat(combined, b.c_str()); // Menggabungkan string b ke array karakter combined

    cout << combined << endl;

    return 0;
}