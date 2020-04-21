#include <iostream>
using namespace std;

/***********************************************
int K(int m,int n)
{
    if(m == 0 || n < 0)
    /
        return 0;
    }
    int r = 1;
    while(n >= 0)
    {
        r *= m;
        n -= 1;
    }
    return r;
}
/**********************************************/

int main()
{
    cout << "Trace Table\n\n";
    cout << "STEP	m	n	K(m,n)	(m == 0 || n < 0)	r	(n >= 0) output\n";
    cout << "1	   -2                                                   \n";							
    cout << "2		    5                                               \n";
    cout << "3				        FALSE				                \n";
    cout << "4					             1		\n";
    cout << "5						                    TRUE		\n";
    cout << "6					             -2	\n";
    cout << "7		    4						                        \n";
    cout << "8						                    TRUE		\n";
    cout << "9					             4	\n";
    cout << "10		    3						                        \n";
    cout << "11						                   TRUE		\n";
    cout << "12					             -8	   \n";
    cout << "13		    2						                        \n";
    cout << "14						                   TRUE		\n";
    cout << "15					             16              \n";			

    
    return 0;
}