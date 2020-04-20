#include <iostream>

using namespace std;

int ConsecutivexNum(int A)
{
    if (A < 0){
        A = A * -1;
    }
    
    
    if ((A % 2 == 0)){
        A = A + 2;
        return A;
       
    }
    else
        A = A + 2;
        return A;
   
}

void AllChanged(int D,int E, int F)
{
int G;
        G = E;
        E = F;
        F = D;
        D = G;
  
}

void Average(double I)
{
double J, K, L, M;
    cout << "Please enter a number: ";
    cin >> J;
    cout << "Please enter ANOTHER number: ";
    cin >> K;
    cout << "Please enter ANOTHER number: ";
    cin >> L;
    cout << (J+K+L)/3;
    M = (J+K+L)/3;
    I = M;
}


int main()
{
    int a,b,c;
    int d,e,f;
    double i;
    
    cout<<"\n\n";
   
    cout<<"Please a digit\n";
    cin>>a;
   
    ConsecutivexNum(a);
    
    cout <<"Now enter 3 digits\n";
    cin>>d>>e>>f;
    
    AllChanged(d,e,f);
    
    Average(i);
    //cout << First << " " << Last;

    return 0;
}
