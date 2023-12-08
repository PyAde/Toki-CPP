#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    
    cin >> a;

    vector<int> b(a);

    
    for (int i = 0; i < a; ++i) {
        
        cin >> b[i];
    }

    sort(b.begin(), b.end());

    int median;
    if (a % 2 == 0) {
        median = (static_cast<double>(b[a / 2 - 1]) + static_cast<double>(b[a / 2])) / 2.0;
    } else {
        median = b[a / 2];
    }

    cout << "Median: " << median << endl;

    return 0;
}
