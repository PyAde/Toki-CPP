#include <iostream>
#include <vector>

using namespace std;

void swap(vector<vector<int>>& balls, int p, int x, int q, int y) {
    std::swap(balls[p][x], balls[q][y]);
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> balls(2, vector<int>(N));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> balls[i][j];
        }
    }

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        char p;
        int x;
        char q;
        int y;
        cin >> p >> x >> q >> y;

        int row_p = p - 'A';
        int row_q = q - 'A';

        swap(balls, row_p, x - 1, row_q, y - 1);
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cout << balls[i][j];
            if (j + 1 < N) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}