#include <iostream>
using namespace std;

int main()
{    
    string name;
    int birthyear, a1, a2, a3;
    
    cout << "\n\n\n\n";
    cout << "Section I\n";
    /*Section I Begins*/
    cout << "Welcome\n";
    cout << "Please enter your first name\n";
    cin >> name;
    cout << "Hello, " << name << "!\n\n";
    /*Section I Ends*/

    cout << "\nSection II\n";
    /*Section II Begins*/
    cout << "Now enter your birth year\n";
    cin >> birthyear;
    cout << "You're " << 2020-birthyear << "!\n\n";
    /*Section II Ends*/

    cout << "\nSection III\n";
    /*Section III Begins*/
    cout << "Now, I am going to do something with 3 numbers!!!\n";
    cout << "PLease enter the first number\n";
    cin >> a1;
    cout << "Now enter the second number\n";
    cin >> a2;
    cout << "Finally, the third number\n";
    cin >> a3;
    cout << "Here it is !!!\n";
    cout << "The AVERAGE for these numbers " << a1 <<", "<< a2 <<" and "<< a3 << " are " << (a1+a2+a3)/3 << "!\n\n";
    // cout << "Hello, " << name << "!\n\n";
    
    /*Section III Ends*/

    return 0;
}