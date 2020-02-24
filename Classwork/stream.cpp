/**********************************************************************
 * Lecture 02.01: Streaming 
 * This program will introduce the read function, cin. (actually it is
 * an object). It is used to receive information from the user. 
 *********************************************************************/ 

#include <iostream>
#include <limits> //numerical_limits
using namespace std;

int main()
{
    int x;
    double y;
    char z;
    string s, t;

    cout << "Reading User Data\n\n";

    /*********************************************************************
     * Streaming is the process interacting with the user. You can write
     * to or read from the user under multiple media. For this lesson, 
     * you will learn how to read from the terminal since from previous 
     * lessons, you learned how to write to the terminal. To read from 
     * the terminal, you need to use the cin function (actually an object)
     * and the istream (extraction) operator, >>. The cin function, must
     * always read data into a variable. When reading data provided by the
     * user, the data is formatted to match the data type of the variable.
     * If the data cannot be formatted, you will get garbage. Furthermore,
     * cin short circuits (stops reading) if it reads what it needs for 
     * the data type or sees a space. The remainder of the data is stored
     * to be read later by other cin calls. Last, when the cin function is 
     * being called, the terminal halts the program and waits for the user
     * to enter something. The data from the user is then read once the 
     * user presses the Enter key.
     ********************************************************************/

    cout << "Enter an integer: ";
    cin >> x;
    cout << "You entered " << x << "\n\n";

    cout << "Enter a double: ";
    cin >> y;
    cout << "You entered " << y << "\n\n";

    cout << "Enter a char: ";
    cin >> z;
    cout << "You entered " << z << "\n\n";

    cout << "Enter a string: ";
    cin >> s;
    //cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << "You entered " << s << "\n\n";

    /****************************************************************************
     * As stated cin stops reads once it encounter a space. So if you need to
     * read an line into a string, you will need to use the function
     * getline(). It takes two arguments. The first is an istream object (in 
     * our case, cin) and the second is a string variable. This function will
     * read the entire line into the string variable.
     ***************************************************************************/
    cout << "Line Read\n";
    cout << "Enter a string: ";
    getline(cin,t);
    cout << "You entered " << t << "\n\n";

    /****************************************************************************
     * A single cin function call can read in multiple data just like how a 
     * single cout function can display multiple arguments. To read in multiple
     * data, attach additional istream operator and varaible pairs.
     ***************************************************************************/

    int a, b, c;

    cout << "Multiple Read\n";
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "You entered " << a << ", " << b << ", " << c << "\n\n";

    return 0;
}