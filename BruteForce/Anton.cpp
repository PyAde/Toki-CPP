#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int anton = 0;
    int danik = 0;

    for (char result : s) {
        if (result == 'A') {
            anton++;
        } else {
            danik++;
        }
    }

    if (anton > danik) {
        cout << "Anton" << endl;
    } else if (danik > anton) {
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }

    return 0;
}
