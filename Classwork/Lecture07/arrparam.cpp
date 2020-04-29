/************************************************************************
 * Lecture 07: Array Parameters
 * This program will show you how to create functions that have arrays 
 * as parameter. Furthermore, it will sho you how to pass arrays as 
 * arguments for call to these functions. An important thing to note is
 * arrays are always passed by reference to functions, so be careful 
 * not to modify its content if that is not your intent.
 ************************************************************************/ 

#include <iostream> 
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std; 

/********************************************
 * Function Definitions
 *******************************************/
void Clear(double data[],int n)
{
    //data is an array
    for(int i = 0;i < n;i += 1)
    {
        data[i] = 0;
    }
}

void Initialize(double data[],int n)
{
    for(int i = 0;i < n;i = i + 1)
    {
        data[i] = (rand() % 90 + 10) / 10.0;
    }
}

void Print(double data[],int n)
{
    cout << "[";

    for(int i = 0;i < n;i += 1)
    {
        cout << data[i];

        if(i != n - 1)
        {
            cout << ",";
        }
    }
    cout << "]\n";
}

double Average(double data[],int n)
{
    double sum = 0;

    for(int i = 0;i < n;i += 1)
    {
        sum = sum + data[i];
    }

    return (n > 0)?(sum / n):(sum);
}

int main()
{
    srand(time(NULL));
    double a[20], b[10], c[15];
    Clear(a,20); Print(a,20);
    Initialize(a,20); Print(a,20);
    return 0;
}
