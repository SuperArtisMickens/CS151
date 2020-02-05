#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{    
    cout << "Section I\n";
    /*Section I Begins*/
    string a;
    string b;
    
    a = "Hello";
    b = "World";
    
    cout << a <<", " << a << " "<< b << "!";
    cout << "\n\n";
    /*Section I Ends*/

    cout << "\nSection II\n";
    /*Section II Begins*/
    int height;
    int inches;
    int feet;
    
    height = 87;
    inches = remainder(height, 12);
    feet = height/12;
    
    cout << "The height of " << height << " inches is equal to " << feet << " feet and " << inches << " inches.";
    cout << "\n";
    /*Section II Ends*/

    cout << "\nSection III\n";
    /*Section III Begins*/
    string star1;
    string star2;
    string star3;
    string star4;
    
    star1 = "*";
    star2 = "**";
    star3 = "***";
    star4 = "****";
    
    cout << "\n\n";
    cout << star4 << " " << star1 << " " << star1 << " " << star4 <<"\n";
    cout << star3 << " " << star2 << " " << star2 << " " << star3 <<"\n";
    cout << star2 << " " << star3 << " " << star3 << " " << star2 <<"\n";
    cout << star1 << " " << star4 << " " << star4 << " " << star1 <<"\n";
    cout << "\n\n";
    /*Section III Ends*/

    return 0;
}