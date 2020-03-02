#include <iostream>
using namespace std;

int main()
{
    string name, adjective, noun;
    string msg;

    cout << "Enter a name: ";
    getline(cin,name);

    cout << "Enter an adjective: ";
    cin >> adjective;

    cout << "Enter a noun: ";
    cin >> noun;

    msg = "Please excuse " + name + ",\nwho is far too " + adjective + " to attend " + noun + " class";

    cout << "\n" << msg << "\n";
    return 0;
}