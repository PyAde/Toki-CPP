#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int pieces[5];

    for (int i = 0; i < 5; i++) {
        cin >> pieces[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (pieces[j] > pieces[j + 1]) {
                swap(pieces[j], pieces[j + 1]);

                for (int k = 0; k < 5; k++) {
                    cout << pieces[k] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
