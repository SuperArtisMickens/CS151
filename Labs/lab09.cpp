#include <iostream>
using namespace std;

int main()
{    
   
    int number_1, number_2;
    cout << "Section I\n";
    /*Section I Begins*/
    cout <<"\n\n";
    cout <<"Please enter one number: ";
    cin >> number_1;
    cout <<"Please enter a second number: ";
    cin >> number_2;
    if (number_1 > number_2) {
        cout <<number_2 << " is the minimum of the two values.";
        }
    else {
        cout << number_1 <<" is the minimum of the two values.";
    }
    cout << "\n\n";
    
    /*Section I Ends*/

    cout << "\nSection II\n";
    /*Section II Begins*/
    int number_3, number_4, number_5;
    
    cout <<"\n\n";
    cout <<"Please enter one number: ";
    cin >> number_3;
    cout <<"Please enter a second number: ";
    cin >> number_4;
    if ((number_3 + number_4)%2 == 0) {
        cout << " The sum of these two values are EVEN.";
        }
    else {
        cout << "The sum of these two values are ODD.";
    }
    cout << "\n\n";

    /*Section II Ends*/

    //cout << "\nSection III\n";
    /*Section III Begins*/

    /*Section III Ends*/

    //cout << "\nSection IV\n";//
    /*Section IV Begins*/

    /*Section IV Ends*/

    return 0;
}