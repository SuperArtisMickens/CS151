/**********************************************************************
 * Lecture 01.03: Numerical Operations
 * This program will introduce you to the different operations you 
 * can perform of various data types.
 *********************************************************************/ 

#include <iostream> //using cout, boolalpha
#include <cmath> //using pow()
using namespace std; 

int main()
{
    /*Integer and Floating-Point Operations*/
    cout << "Integer and Floating-Point Operations\n\n";
 
    /********************************************
    * Integer and Floating-Point operations are 
    * arithmetic operations. Most of the symbols
    * you use in mathematics for the operations 
    * are adopted.     
    *********************************************/

    int a = 2, b = 5;
    double c = 2.0, d = 5.0;

    cout << "For each of the operations:\n";
    cout << "a = 2 (int)\n";
    cout << "b = 5 (int)\n";
    cout << "c = 2.0 (double)\n";
    cout << "d = 5.0 (double)\n";
    
    /*Addition Operation*/
    cout << "The symbol for addition is +\n\n";

    cout << "Integer Addition\n";
    cout << "a + b : " << (a + b) << " (int)\n";
    cout << "b + a : " << (b + a) << " (int)\n\n";

    cout << "Floating-Point Addition\n";
    cout << "c + d : " << (c + d) << " (double)\n";
    cout << "d + c : " << (d + c) << " (double)\n";

    cout << "\nAs you see above, addition is commutative.\n";
    cout << "If the operands are a mixture of integer\n";
    cout << "and floating-point data types, the result of\n";
    cout << "the operation is interrupted as a floating-point\n\n";

    cout << "Mixed Addition\n";
    cout << "a + d : " << (a + d) << " (double)\n";
    cout << "d + a : " << (d + a) << " (double)\n";

    /*Subtraction Operation*/
    cout << "\nThe symbol for subtraction is -\n\n";

    cout << "Integer Subtraction\n";
    cout << "a - b : " << (a - b) << " (int)\n";
    cout << "b - a : " << (b - a) << " (int)\n\n";

    cout << "Floating-Point Subtraction\n";
    cout << "c - d : " << (c - d) << " (double)\n";
    cout << "d - c : " << (d - c) << " (double)\n\n";

    cout << "Mixed Subtraction\n";
    cout << "a - d : " << (a - d) << " (double)\n";
    cout << "d - a : " << (d - a) << " (double)\n";

    /*Multiplication Operation*/
    cout << "\nThe symbol for multiplication is *\n\n";

    cout << "Integer Multiplication\n";
    cout << "a * b : " << (a * b) << " (int)\n";
    cout << "b * a : " << (b * a) << " (int)\n\n";

    cout << "Floating-Point Multiplication\n";
    cout << "c * d : " << (c * d) << " (double)\n";
    cout << "d * c : " << (d * c) << " (double)\n";

    cout << "\nLike addition, multiplication is commutative as expected\n\n";
    cout << "Mixed Multiplication\n";
    cout << "a * d : " << (a * d) << " (double)\n";
    cout << "d * a : " << (d * a) << " (double)\n";

    /*Division Operation*/
    cout << "\nThe symbol for division is /\n\n";

    cout << "Integer Division\n";
    cout << "a / b : " << (a / b) << " (int)\n";
    cout << "b / a : " << (b / a) << " (int)\n\n";

    cout << "When you divide two integers as seen above,\n";
    cout << "the result is the quotient of integer division\n\n";

    cout << "Floating-Point Division\n";
    cout << "c / d : " << (c / d) << " (double)\n";
    cout << "d / c : " << (d / c) << " (double)\n";

    cout << "Whereas division of two floating-point operands\n";
    cout << "is decimal division\n\n";

    cout << "Mixed Multiplication\n";
    cout << "a / d : " << (a / d) << " (double)\n";
    cout << "d / a : " << (d / a) << " (double)\n";

    /*Modulus Operation*/
    cout << "\nAn additional operator is available only\n";
    cout << "for integer data types which is called modulus.\n";
    cout << "The symbol for modulus is %. The result of modulus\n";
    cout << "division is the remainder of integer division\n\n";

    cout << "Integer Modulus Division\n";
    cout << "a % b : " << (a % b) << " (int)\n";
    cout << "b % a : " << (b % a) << " (int)\n\n";

    /************************************************************
    * Like in mathematics, you can write complex mathematical
    * expressions. With those expressions, you evaluate the
    * expression by using the order of precedence rule. 
    * In C++, the order of precedence rules are similar to 
    * mathematics. They are:
    * 1. Parentheses - ()
    * 2. Return-Value Function Calls - f() 
    * 3. Multiplication, Division, Modulus - *, /, % 
    * 4. Addition, Subtraction - +, -
    * Eactly like mathematics, operations with the same 
    * precedence are evaluated from left to right
    *************************************************************/

    //Expression are arguments, hence they can be assigned to variables
    //Evaulate these expressions before you compile the code
    int r1 = 78 + 4 * 12 - 10;
    int r2 = (78 + 4) * (12 - 10);
    int r3 = 40 - 64 % 7 / 2; 
    //pow() returns the first argument raised to the power of the second argument
    double r4 = 3 * pow(4,3) - 5 * pow(4,2) - 2 * 4 + 18;
    double r5 = 67 / 5 + 4.5 * 3; //Think about this one 
    double r6 = 54.0 / 12 * 5;

    cout << "\nEvaluations of expressions\n";
    cout << "78 + 4 * 12 - 10 = " << r1 << "\n";
    cout << "(78 + 4) * (12 - 10) = " << r2 << "\n";
    cout << "40 - 64 % 7 / 2 = " << r3 << "\n";
    cout << "3 * 4^3 - 5 * 4^2 - 2 * 4 + 18 = " << r4 << "\n";
    cout << "67 / 5 + 4.5 * 3 = " << r5 << "\n";
    cout << "54.0 / 12 * 5 = " << r6 << "\n";

    /**********************************************************************
    * When a variable is either initialized or assigned a value,
    * you can modify its value to using a compound assignment 
    * operator. Compound assignment operators are a concatenation
    * of an arithmetic operator and the assignment operator. 
    * For instances, x += 4 is a compound assignment operator expression
    * that is assigning the variable x 4 more than its original value. 
    * Compound assignments are interpreted as x = x + 4 (using the 
    * previous example). The right-hand side can be an expression. Order
    * of precedence does not apply to the compound assignment operator; its
    * operation will always be done last in situations when the right-hand 
    * side is an expression.
    ***********************************************************************/ 

    r1 += 6;
    r2 -= 12;
    r3 %= 8;
    r4 /= 4;
    r5 *= 10;
    r6 += r1 + r2 - r3 * r4;

    cout << "\nResults after use of compound assignment operators\n";
    cout << "r1 += 6 : " << r1 << "\n";
    cout << "r2 -= 12 : " << r2 << "\n";
    cout << "r3 %= 8 : " << r3 << "\n";
    cout << "r4 /= 4 : " << r4 << "\n";
    cout << "r5 *= 10 : " << r5 << "\n";
    cout << "r6 += r1 + r2 - r3 * r4 : " << r6 << "\n";

    return 0;
}
