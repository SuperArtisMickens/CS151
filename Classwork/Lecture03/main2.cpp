#include <iostream>
using namespace std;

int main()
{
    int x, y, r;
    bool rx, ry, rr;

    cout << "Enter an integer: ";
    cin >> x;
    rx = (x * x) % 2 == 0;

    cout << "Enter another integer: ";
    cin >> y;
    ry = (y * y) % 2 == 0;

    r = x + y;
    rr = (r * r) % 2 == 0;

    cout << boolalpha;
    cout << "\nSince it is " << rx << " that " << x << " is even\n";
    cout << "and it is " << ry << " that " << y << " is even,\n";
    cout << "it is " << rr << " that their sum " << r << " is even\n";
    return 0;
}