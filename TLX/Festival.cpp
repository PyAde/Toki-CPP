#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    long long result = 0;

    for (int i = 0; i < N; ++i) {
        result += static_cast<long long>(A[i]) * B[i];
    }

    if (result % 2 == 0) {
        cout << "0\n";
    } else {
        cout << "1\n";
    }

    return 0;
}
