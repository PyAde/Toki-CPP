#include <iostream>
#include <vector>

using namespace std;

int hitung_jumlah_menunduk(int N, int D, vector<int>& A) {
    int count = 0;
    for (int i = 0; i < N - 1; i++) {
        if (A[i + 1] - A[i] <= D) {
            count++;
        }
    }
    return count;
}

int main() {
    int N, D;
    cin >> N >> D;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int hasil = hitung_jumlah_menunduk(N, D, A);
    cout << hasil << endl;
    
    return 0;
}