#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{    
    /*Lab_04 - writing a c++ Program that Produces Stars around our First Name and Last Nameg++*/
    string fname;
    string lname;
    string star1;
    string star2;
    string star3;
    string star4;
    
    star1 = "*";
    star2 = "**";
    star3 = "***";
    star4 = "****";
   
   
    fname = "Krishna Dass";
    lname = "Artis-Mickens";
    
    cout << "\n\n";
    cout << star4 << star1 << star1 << star4 << star4 << star1 << star1 << star4 << star4 << star3 <<"\n";
    cout << lname <<", " << fname << "\n";
    cout << star3 << star2 << star2 << star3 << star4 << star1 << star1 << star4 << star4 << star3 <<"\n";
    cout << "\n\n";
   return 0;   
}