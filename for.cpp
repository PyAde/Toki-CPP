#include <iostream>
using namespace std;

int main() {
    int s, b, k;
    int i;

    
    cin >> k >> b;
    k -= b;

    s = 1;
    for (int i = 1; i <= 61; i++) {
        s *= 2;
    }

    
    while (k > 0) {
        if (k >= s) {
            cout << s << " ";
            k %= s;
        }
        s /= 2;
    }

    
    cout << endl;

    return 0;
}
