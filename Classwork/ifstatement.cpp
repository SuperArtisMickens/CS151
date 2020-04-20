/**********************************************************************
 * Lecture 04.01: If Statements
 * This program will introduce you to the very first control structure
 * called the if statement. Control structures are structures that
 * execute bodies of code based on a condition which is a boolean
 * expression. 
 **********************************************************************/ 

#include <iostream> //using cout, boolalpha
using namespace std; 

int main()
{
    /***********************************************
     * If you want to execute a specific set of
     * statements only if a certain condition is 
     * met, you use an if statement.
     ***********************************************/

    //Make nonnegative - Absolute Value Function
    double n;

    cout << "Absolute Value\n\n";
    cout << "Enter a number: ";
    cin >> n;

    /************************************************
     * If the user entered a positive number or zero,
     * we do not want to do anything with the number.
     * However, if the user entered a negative 
     * number, we want to make it, positive by 
     * multiplying it by -1.
     ************************************************/

    if(n < 0)
    {
        n = n * -1;
    } 

    /*************************************************
     * As you see above the if statement states with 
     * the keyword if (IT MUST BE LOWERCASE) which 
     * is followed by parentheses with a boolean 
     * expression between them which we call a 
     * condition. And the body of thef statement is 
     * enclosed in curly braces. The body of the if 
     * statement forms a new local scope. Anyway, 
     * if the condition is true, the body of the if
     * statement is executed; however, it the 
     * condition is false, the body is skipped.
     ************************************************/

    cout << "The absolute of your number is " << n << "\n\n"; 

    //Make a letter character lowercase - ToLowercase
    char c;

    cout << "To Lowercase\n\n";
    cout << "Enter a character: ";
    cin >> c;

    if(c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }

    cout << "Your character lowercase is " << c << "\n\n";

    //Make an integer a positive odd integer - MakePostiveOdd
    int x;

    cout << "Make Postive Odd Integer\n\n";
    cout << "Enter an integer: ";
    cin >> x;

    if(x < 0)
    {
        x *= -1;
    }

    if(x % 2 == 0)
    {
        x += 1;
    }

    cout << "Your positive odd integer is " << x << "\n\n";
    return 0;
}
