#include <iostream>
using namespace std;

int T(int n)
{
    int s = 1;

    while(n > 0)
    {
        s = s * n;
        n -= 2;
    }
    values[0] = s;
    return s;
}

int main()
{    
    //Write all tasks below here
    
    int values [5];
    values[2] = 12;
    
    values[4] = ((values[2] * 2) + 3);
    
    values[1] = values[0] - values[4];
    
    values[3] = ((values[0] + values[1] + values[2] + values[3] + values[4]) * 4);
    
    return 0;
}