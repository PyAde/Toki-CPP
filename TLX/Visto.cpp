#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b;
    int max[1000];

    cin >> a;
    for (int i = 0; i < a; ++i) {
        cin >> b;

        for (int j = 0; j < b; ++j) {
            cin >> max[j];
        }

        auto max_begin = begin(max);
        auto max_end = max_begin + b;

        sort(max_begin, max_end);

        int median ;
								median = (b % 2 == 0) ? (max[b / 2 - 1] + max[b / 2]) / 2 : max[b / 2];
        int result = 0;
        for (int j = 0; j < b; ++j) {
            result += abs(median - max[j]);
        }

        cout << result << endl;
    }

    return 0;
}
