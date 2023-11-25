#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
				ostringstream result;
    result << a << b;
    cout << result.str();
    return 0;
}
