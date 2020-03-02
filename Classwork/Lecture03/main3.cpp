#include <iostream>
using namespace std;

int main()
{
    char a, b, c;
    bool isa, isb, isc;

    cout << boolalpha;

    cout << "Enter the first letter: ";
    cin >> a;

    isa =  ('a' <= a && a <= 'z') || ('A' <= a && a <= 'Z');
    cout << "It is " << isa << " that " << a << " is a letter\n\n";

    cout << "Enter the second letter: ";
    cin >> b;

    isb =  ('a' <= b && b <= 'z') || ('A' <= b && b <= 'Z');
    cout << "It is " << isb << " that " << b << " is a letter\n\n";

    cout << "Enter the third letter: ";
    cin >> c;

    isc =  ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
    cout << "It is " << isc << " that " << c << " is a letter\n\n";

    cout << "All the arrangements of " << a << ", " << b << ", " << c << " are\n";
    cout << a << b << c << "\n" << a << c << b << "\n";
    cout << b << a << c << "\n" << b << c << a << "\n";
    cout << c << b << a << "\n" << c << a << b << "\n";
    return 0;
}