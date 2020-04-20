/**********************************************************************
 * Lecture 04.01: If Else Statement
 * This program will introduce you to the if-else statement. The
 * if-else statement is actually two statements as one since the 
 * else statement cannot stand alone. Like the if statement, the 
 * if-else statement starts the same way; however, immediately after 
 * the if statement body the else statement is written. With the 
 * if-else statement, if the condition of the if statement is 
 * true, the if-statement body is executed. But is the condition of
 * the if statement is false, the else statement body is executed. 
 * Hence, if-else statements are used whenever you have an either or
 * situation. 
 * Note: the else statement does not have a condition.
 **********************************************************************/ 

#include <iostream> //using cout, boolalpha
using namespace std; 

int main()
{
    /***********************************************
     * You want to execute one of two possible 
     * specific set of statements when either a 
     * certain condition is met or not met, you 
     * use an if-else statement.
     ***********************************************/

    //EvenOrOddAbsolute - states if a value is even or odd
    int a;

    cout << "Even Or Odd\n\n";
    cout << "Enter an integer: ";
    cin >> a;

    /************************************************
     * If the user entered an even number, we display
     * that the number is even; otherwise, we display
     * that the number is odd.
     ************************************************/

    if((a * a) % 2 == 0)
    {
        cout << a << " is an even number";
    } 
    else
    {
        cout << a << " is an odd number";
    }
    
    cout << "\n\n";

    /*************************************************
     * As you see above the else statement starts 
     * with the keyword else (IT MUST BE LOWERCASE) 
     * and is followed by its body. Likewise, the else
     * statement follows immediately after the if 
     * statement body. The else statement body will
     * only execute if the condition is false.
     *************************************************/


    //Minimum Value - displays the minumum value of two numbers
    double x, y, m;

    cout << "Minimum Value\n\n";
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;

    if(x <= y)
    {
        m = x;
    }
    else 
    {
        m = y;
    }

    cout << m << " is the minimum value of " << x << " and " << y << "\n\n";

    /***********************************************************
     * Whenever you are using an if-else statement to do a 
     * simple assignment as above, you can use a ternary 
     * expression instead. A ternary expression uses the
     * ? and : operators. It syntax is 
     * (<condition>)?<argument1>:<argument1>. If 
     * <condition> is true, <argument1> is executed; otherwise,
     * <argument2> is executed. Below is minimum value that 
     * uses a ternary expression. 
     ***********************************************************/

    cout << "Minimum Value 2\n\n";
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter another number: ";
    cin >> y;

    m = (x <= y)?(x):(y);

    cout << m << " is the minimum value of " << x << " and " << y << "\n\n";

    /**************************************************************
     * If you entered the same values, you will see that the 
     * results are exactly the same.
     *************************************************************/ 
    
    //Convert Letter - makes uppercase letters to lowercase letters and vica versa
    char c, v;
    bool r;

    cout << "Letter Converter\n\n";
    cout << "Enter a character: ";
    cin >> c;

    if((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z'))
    {
        if(c >= 'a' && c <='z')
        {
            v = c - 32;
        }
        else
        {
            v = c + 32;
        }
        r = true;
    }
    else
    {
        r = false;
    }

    if(r)
    {
        cout << "The letter " << c << " converted is " << v << "\n\n";
    }
    else
    {
        cout << c << " is not a letter\n\n";
    }
    
    return 0;
}
