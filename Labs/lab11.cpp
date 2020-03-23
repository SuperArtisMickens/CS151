#include <iostream>
#include <cmath>
using namespace std;

/*********************************
 * Start of Function Definitions
 *********************************/

double SumOfThree(double x,double y,double z)
{
    double r = x + y + z;
    return r;
}

double Absolute(double w)
{
    double t = abs(w);
    return t;
}

bool IsLetter(char v)
{
    bool status;
    char s = v;
    if (s > 65 && s < 91 || s > 96 && s < 123)
        cout <<"Now this is a letter.";
    else
        cout <<"Now this is not a letter.";
    return status;
}

/******************************
 * End of Function Definitions
 ******************************/

int main()
{    
    //Function Calls
    
    double a,b,c,d;
    double e,f;
    char g, h;
    
    cout << "Please enter your first value ";
    cin >> a;
    cout << "Please enter your second value ";
    cin >> b;
    cout << "Please enter your third value ";
    cin >> c;
    
    d = SumOfThree(a,b,c);
    
    cout <<"\n\nThe sum of those 3 numbers are "<<d;
    cout <<"\n\n";
    
    cout << "Please enter your first value ";
    cin >> e;
    
    f = Absolute(e);
    
    cout <<"\nThe absolute value of this number is "<<f;
    
    cout <<"\n\n";
    cout <<"Please enter a character ";
    cin >> g;
    
    h = IsLetter(g);
    
    cout <<"\n"<<h;
  
    return 0;
}