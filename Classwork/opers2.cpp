/**********************************************************************
 * Lecture 01.04: Boolean Operations 
 * This program will introduce you to the different operations you 
 * can perform of various data types.
 *********************************************************************/ 

#include <iostream> //using cout, boolalpha
#include <iomanip> //using setw(), setfill()
using namespace std; 

int main()
{
    /*Boolean Operations*/
    cout << "Boolean Operations\n\n";
 
    /***************************************************************
    * Boolean operations are relational and logical operations. The 
    * relational operators are comparison operators such as equal 
    * to, greater than, less than and so on. Logical operators are 
    * operators that relates boolean expressions i.e they are used 
    * to create compound boolean statements. The results of both 
    * relational and logical operations are boolean.     
    ***************************************************************/

    /**************************************************************
     * Relational operands can be any data type; however, not 
     * every data type work with every relational operator. 
     * Numerical and integral type (charaters and boolean) work 
     * with all relational operators. Strings only work with equal 
     * to and not equal to operators.
     *************************************************************/
    int a = 2, b = 5;
    char c = 'a', d = 'A'; 
    string e = "word";

    cout << "For each of the operations:\n";
    cout << "a = 2 (int)\n";
    cout << "b = 5 (int)\n";
    cout << "c = \'a\' (char)\n";
    cout << "d = \'A\' (char)\n";
    cout << "e = \"word\" (string)\n";
    
    /*Equal To Operations*/
    cout << boolalpha;
    cout << "The symbol for equal to is ==\n";
    cout << "It returns true if both operands are equal;\n";
    cout << "otherwise, it returns false\n\n";

    cout << "a == b : " << (a == b) << " (bool)\n";
    cout << "c == d : " << (c == d) << " (bool)\n";
    cout << "e == e : " << (e == e) << " (bool)\n";
    cout << "d == \'A\' : " << (d == 'A') << " (bool)\n\n";

    /*Not Equal To Operations*/
    cout << "The symbol for not equal to is !=\n";
    cout << "It returns true if both operands are not equal;\n";
    cout << "otherwise, it returns false\n\n";

    cout << "a != b : " << (a != b) << " (bool)\n";
    cout << "c != d : " << (c != d) << " (bool)\n";
    cout << "e != e : " << (e != e) << " (bool)\n";
    cout << "a != 2 : " << (a != 2) << " (bool)\n\n";

    /*Greater Than Operations*/
    cout << "The symbol for greater than is >\n";
    cout << "It returns true if the left operand is greater than\n";
    cout << "the right operand; otherwise, it returns false\n\n";

    cout << "a > b : " << (a > b) << " (bool)\n";
    cout << "b > a : " << (b > a) << " (bool)\n";
    cout << "c > d : " << (c > d) << " (bool)\n";
    cout << "d > c : " << (d > d) << " (bool)\n\n";

    /*Less Than Operations*/
    cout << "The symbol for less than is <\n";
    cout << "It returns true if the left operand is less than\n";
    cout << "the right operand; otherwise, it returns false\n\n";

    cout << "a < b : " << (a < b) << " (bool)\n";
    cout << "b < a : " << (b < a) << " (bool)\n";
    cout << "c < d : " << (c < d) << " (bool)\n";
    cout << "d < c : " << (d < c) << " (bool)\n\n";

    /*Greater Than or Equal To Operations*/
    cout << "The symbol for greater than or equal to is >=\n";
    cout << "It returns true if the left operand is greater than\n";
    cout << "or equal to the right operand; otherwise, it returns false\n\n";

    cout << "a >= b : " << (a >= b) << " (bool)\n";
    cout << "b >= a : " << (b >= a) << " (bool)\n";
    cout << "c >= d : " << (c >= d) << " (bool)\n";
    cout << "d >= d : " << (d >= d) << " (bool)\n\n";

    /*Less Than or Equal To Operations*/
    cout << "The symbol for less than or equal to is <=\n";
    cout << "It returns true if the left operand is less than\n";
    cout << "or equal to the right operand; otherwise, it returns false\n\n";

    cout << "a <= b : " << (a <= b) << " (bool)\n";
    cout << "b <= a : " << (b <= a) << " (bool)\n";
    cout << "c <= d : " << (c <= d) << " (bool)\n";
    cout << "d <= d : " << (d <= d) << " (bool)\n\n";

    /************************************************************
    * Note: Notice for relational operators that consists of two 
    * characters that there is no space between the characters.
    * Placing a space between the characters will cause an 
    * error. This is exactly like compund assignment operators.
    * Furthermore, operands for relational operations can be 
    * expressions as well. It is important to note is that 
    * relational operations have lower precedence than arithmetic 
    * operations. Likewise, all relational operations are binary 
    * operations which means each operator has two operands.
    *************************************************************/

    cout << "1 + 2 + 3 + 4 == 4 * 5 / 2 : " << (1 + 2 + 3 + 4 == 4 * 5 / 2) << " (bool)\n\n";

    /*Logical Operators*/

    /**************************************************************
    * There are situations where you need to verify a complex 
    * boolean expression such as 1 <= x <= 100 (x is between 1 and
    * 100 inclusively). With relational operators alone this is 
    * impossible. Hence, you need to use logical operators. There
    * are three logical operators namely NOT, AND, and OR. The 
    * operators AND and OR are binary operators and the operator
    * NOT is a unary operator (only one operand). NOT has a higher
    * precedence than arithmetic operators, but AND and OR have a
    * lower precdence than relational operators with AND having
    * a higher precedence than OR. 
    *************************************************************/

    cout << "Logical Opertors\n\n";

    /*NOT operations*/
    cout << "The symbol for NOT is !\n";
    cout << "It returns the opposite boolean value of the\n";
    cout << "operand. Its truth table is as follows:\n\n";

    cout << left;
    cout << setw(6) << "A" << "|" << setw(6) << "!A" << "\n";
    cout << setw(13) << setfill('-') << "-" << "\n" << setfill(' ');
    cout << setw(6) << true << "|" << setw(6) << !true << "\n";
    cout << setw(6) << false << "|" << setw(6) << !false << "\n\n";

    /*AND operations*/
    cout << "The symbol for AND is &&\n";
    cout << "It returns true only if both operands\n";
    cout << "are true; otherwise, it returns false.\n";
    cout << "Its truth table is as follows:\n\n";

    cout << setw(6) << "A" << "|" << setw(6) << "B" << "|" << setw(7) << "A && B" << "\n";
    cout << setw(21) << setfill('-') << "-" << "\n" << setfill(' ');
    cout << setw(6) << true << "|" << setw(6) << true << "|" << setw(6) << (true && true) << "\n";
    cout << setw(6) << true << "|" << setw(6) << false << "|" << setw(6) << (true && false) << "\n";
    cout << setw(6) << false << "|" << setw(6) << true << "|" << setw(6) << (false && true) << "\n";
    cout << setw(6) << false << "|" << setw(6) << false << "|" << setw(6) << (false && false) << "\n\n";

    /*OR operations*/
    cout << "The symbol for OR is ||\n";
    cout << "It returns false only if both operands\n";
    cout << "are false; otherwise, it returns true.\n";
    cout << "Its truth table is as follows:\n\n";

    cout << setw(6) << "A" << "|" << setw(6) << "B" << "|" << setw(7) << "A || B" << "\n";
    cout << setw(21) << setfill('-') << "-" << "\n" << setfill(' ');
    cout << setw(6) << true << "|" << setw(6) << true << "|" << setw(6) << (true || true) << "\n";
    cout << setw(6) << true << "|" << setw(6) << false << "|" << setw(6) << (true || false) << "\n";
    cout << setw(6) << false << "|" << setw(6) << true << "|" << setw(6) << (false || true) << "\n";
    cout << setw(6) << false << "|" << setw(6) << false << "|" << setw(6) << (false || false) << "\n\n";

    /*Compound Expressions*/

    cout << "Compound Expression Examples\n\n";

    int x = 89;

    cout << "1 <= x <= 100 : " << (x >= 1 && x <= 100) << "\n";
    cout << "x is even or a multiple of 3 : " << (x % 2 == 0 || x % 3 == 0) << "\n";
    cout << "c is a lowercase letter : " << (c >= 'a' && c <= 'z') << "\n";
    cout << "1 more than twice a and 1 more than twice b both have a remaider of 2 when divided 3 : " << ((2 * a + 1) % 3 == 2 && (2 * b + 1) % 3 == 2) << "\n\n";

    return 0;
}
