#include <iostream>
using namespace std;

int main()
{    
    char x_char;
    int first, second;
    int sec_three_i, sec_three_j, sec_three_k; 

    cout << "Section I\n";
    /*Section I Begins*/
    cout << "\n Please enter a character: \n";
    cin >> x_char;
    if (x_char >= '0' && x_char <= '9')
    {
        cout << "This is a digit\n\n";
    }
        

    /*Section I Ends*/

    cout << "\nSection II\n";
    /*Section II Begins*/
    cout << "\n Please enter a number: \n";
    cin >> first;
    cout << "\n Please another number: \n";
    cin >> second;
    if (first > second)
    {
        cout << first << " is greater than " << second << ".\n\n";
    }

    /*Section II Ends*/

    cout << "\nSection III\n";
    /*Section III Begins*/
    cout << "\n Please enter a number: \n";
    cin >> sec_three_i;
    cout << "\n Please another number: \n";
    cin >> sec_three_j;
    cout << "\n Please another number: \n";
    cin >> sec_three_k;
    if (sec_three_i == sec_three_j && sec_three_i == sec_three_k)
    {
        cout << "We have a match.\n\n";
    }
    /*Section III Ends*/

    return 0;
}