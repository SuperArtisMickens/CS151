#include <iostream>
using namespace std;

/*********************************
 * Start of Function Definitions
 *********************************/
 int GCD(int a, int b) { 
   if (a == 0 || b == 0) 
      return 0; 
   else if (a == b) 
      return a; 
   else if (a > b) 
      return GCD(a - b, b); 
   else return GCD(a, b - a); 
} 

int Tau(int c){
    int i;
    
    if (c < 0){
        c = c * -1;
    }

    cout << "The factors of " << c << " are: " << endl;  
    for(i = 1; i <= c; ++i)
    {
        if(c % i == 0)
            cout << i << " ";
    }
}

/******************************
 * End of Function Definitions
 ******************************/

int main()
{    
    //Function Calls

      int a, b;
    
   cout << "Please enter a value: ";
   cin >> a;
   cout << "Please enter another value: ";
   cin >> b;
   cout<<"GCD of "<< a <<" and "<< b <<" is "<< GCD(a, b); 
   
   int c;
   cout <<"\n\nPlease enter a value: ";
   cin >> c;
   Tau(c);

    return 0;
}