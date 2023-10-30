#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    for (int i = 2; i <= 100; i++)
    {
        if (i % A != 0 && i % B != 0 && i % C != 0)
        {
            cout << i;
            break;
        }
    }

    return 0;
}
