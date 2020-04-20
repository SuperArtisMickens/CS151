#include <iostream>

using namespace std;

bool ConsecutiveNums(double A,double B,double C)
{
    if ((A+B+C)/3 == A || (A+B+C)/3 == B || (A+B+C)/3 == C){
        cout << "True\n";
        return true;    
    }
    else
        cout << "False\n";
        return false;
   
}

void SwapIfLessThan(double D,double E)
{
double F;
    if ((D<E)){
        F = E;
        E = D;
        D = F;
        
    }
    else
        E = E;
        D = D;

  
}

string Name()
{
string First_Name, Last_Name, FullName;
    cout << "Please enter your FIRST NAME: ";
    cin >> First_Name;
    cout << "Please enter your LAST NAME: ";
    cin >> Last_Name;
    cout << First_Name<< " "<< Last_Name;

return First_Name, Last_Name; 
  
}


int main()
{
    int a,b,c;
    double d, e;
    
    cout<<"\n\n";
   
    cout<<"Please enter 3 digits\n";
    cin>>a>>b>>c;
   
    ConsecutiveNums(a,b,c);
    
    cout <<"Now enter 2 digits\n";
    cin>>d>>e;
    
    SwapIfLessThan(d,e);
    Name();
    //cout << First << " " << Last;

    return 0;
}
