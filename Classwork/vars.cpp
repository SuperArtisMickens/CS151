/**********************************************************************
 * Lecture 01.02: Variables
 * This program will introduce you to data types, variables and 
 * literals. Likewise, you will learn implicit and explicit 
 * typecasting.
 *********************************************************************/ 

#include <iostream> //using cout, boolalpha
#include <string>
using namespace std; 

int main()
{
    /*Data types and Variables*/
    /*Integer Data Types*/
    short v1;
    int v2;
    long v3;
    unsigned short v5;
    unsigned int v4;
    unsigned long v6;

    /*Floating Point Data Types*/
    float v7;
    double v8;
    long double v9;

    /*Character Data Type*/
    char v10;

    /*String Data Type*/
    string v11; //This data type is from the string library. 
    //For the g++ compiler this library is implicitly loaded in your code

    /*Boolean Data Type*/
    bool v12; 

    /*All of the variables above have been declared. This means 
    they were created i.e. they all have r-values (address locations). */

    /*The display of the r-value of each variable*/

    cout << "The display of the r-value of each variable\n\n";
    cout << "v1 : " << &v1 << "\n";
    cout << "v2 : " << &v2 << "\n";
    cout << "v3 : " << &v3 << "\n";
    cout << "v4 : " << &v4 << "\n";
    cout << "v5 : " << &v5 << "\n";
    cout << "v6 : " << &v6 << "\n";
    cout << "v7 : " << &v7 << "\n";
    cout << "v8 : " << &v8 << "\n";
    cout << "v9 : " << &v9 << "\n";
    /*Char varaibles are special in C++. 
    Whenever you are displaying the address 
    of a char variable, its l-value (content)
    will display instead*/ 
    cout << "v10 : " << &v10 << "\n";
    cout << "v11 : " << &v11 << "\n";
    cout << "v12 : " << &v12 << "\n";   

    /*Variable assignments and literals*/
    /*Variable assignments provide the l-value (content) to the 
    variable*/

    /*Integer Literals*/
    v1 = -48;
    v2 = 8933;
    v3 = 123930940;
    v4 = 23;
    v5 = 1809;
    v6 = 2893929422;

    /*Floating-Point Literals*/
    v7 = 273.3432;
    v8 = 3.1415926535897;
    v9 = 3.1415926535897;

    /*Char Literal*/
    v10 = 'r';

    /*String Literal*/
    v11 = "Hello World";

    /*Boolean Literal*/
    v12 = true;

    /*The display of the l-value of each variable*/
    
    cout << "The display of the l-value of each variable\n\n";
    cout << boolalpha; //displays true/false for boolean variable instead of 1/0
    cout << "v1 : " << v1 << "\n";
    cout << "v2 : " << v2 << "\n";
    cout << "v3 : " << v3 << "\n";
    cout << "v4 : " << v4 << "\n";
    cout << "v5 : " << v5 << "\n";
    cout << "v6 : " << v6 << "\n";
    cout << "v7 : " << v7 << "\n";
    cout << "v8 : " << v8 << "\n";
    cout << "v9 : " << v9 << "\n";
    cout << "v10 : " << v10 << "\n";
    cout << "v11 : " << v11 << "\n";
    cout << "v12 : " << v12 << "\n";   

    /*Typecasting is the process of converting a data type to another
    data type. Some data types can be implicitly typecasted, while 
    others need to be explicitly typecasted or cannot be typecasted
    at all.*/

    /*Implicit Typecast*/
    /*Integer Type to Integer Type*/

    /*Floating-Point Type to Integer Type*/

    /*Integer Type to Floating-Point Type*/

    /*Floating-Point Type to Floating-Point Type*/
    
    /*Char Type to Integer Type*/

    /*Integer Type to Char Type (With Restrictions)*/

    /*Integer Type to Boolean Type*/

    /*Boolean Type to Integer Type*/

    /*Char Type to String Type*/

    return 0;
}
