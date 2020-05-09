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
    return s;
}

int main()
{    
    //Write all tasks below here
    return 0;
}