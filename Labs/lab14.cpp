#include <iostream>
using namespace std;

/*********************************
 * Start of Function Definitions
 *********************************/
void CountDown(int A)
{
    if (A < 0)
        return;
    
    for (int i = 1; i <= A; A--){
        cout << A << "\n";
    }
   
}

int PositiveMultipleOf3()
{
int E;
      
    
    cout << "Please enter a multiple of 3: ";
    cin >> E;
    
    while ((E % 3) != 0){
        cout << "Please enter a multiple of 3: ";
        cin >> E;
    }
    
    return E;    
}

int SumOfOdds(int I)
{
double J, K, L, M;
    if (I < 0) {
        return 0;
    }

    for (int i = 1; i <= I ; i++){
        if (i % 2 !=0){
            J = i + J;
            K = J + i;
            //cout << J << " ";
        }
    }
    cout << J;
    return J;
}


/******************************
 * End of Function Definitions
 ******************************/

int main()
{    
    //Function Calls
    int a,b,c;
    int d,e,f;
    int i;
    
    cout<<"\n\n";
   
    cout<<"Please a digit\n";
    cin>>a;
   
    CountDown(a);
    
    
    PositiveMultipleOf3();
    
    cout << "Please enter a number: ";
    cin >> i;
    SumOfOdds(i);

    return 0;
}