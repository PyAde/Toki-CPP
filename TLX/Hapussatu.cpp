#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    
    

    if (A.length() - 1 != B.length()) {
        cout << "Wah, tidak bisa :(" << endl;
        return 0;
    }

    for (int i = 0; i < A.length(); i++) {
        string removed = A;
        removed.erase(i, 1);
        if (removed == B) {
            cout << "Tentu saja bisa!" << endl;
            return 0;
        }
    }

    cout << "Wah, tidak bisa :(" << endl;
    return 0;
}