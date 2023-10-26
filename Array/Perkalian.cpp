#include <iostream>
using namespace std;

int main() {
    int N, M, P;
    cin >> N >> M >> P;
    int matrixA[N][M];
    int matrixB[M][P];


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrixA[i][j];
        }
    }


    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            cin >> matrixB[i][j];
        }
    }

    int matrix_reset[N][P];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            matrix_reset[i][j] = 0;
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            for (int k = 0; k < M; k++) {
                matrix_reset[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < P; j++) {
            cout << matrix_reset[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
