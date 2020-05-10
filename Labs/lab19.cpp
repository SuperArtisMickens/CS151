#include <iostream>
using namespace std;

void TraceTable()
{
    /*Write the trace of the function below:
    bool Q(int A[],int n)
    {
        bool fd = false;

        for(int i = 0;i < n - 1;i += 1)
        {
            if(A[i] == A[i+1])
            {
                if(fd == false)
                {
                    fd = true;
                    continue;
                }
                return true;
            }
        }
        return false;
    }
    */
    return;
}

//Define second task function below here

int main()
{    
    //Write call all tasks below here
    
    cout << "Trace Table\n";
    cout << "-----------\n\n";
    cout << "step  |A[]  |n    |fd   |i    |i<=n |A[i] == A[i+1] |fd = F |return |out\n";
    cout << "------|-----|-----|-----|-----|-----|---------------|-------|-------|---\n";
    cout << "01.   |a    |     |     |     |     |               |       |       |   \n";
    cout << "02.   |     |10   |     |     |     |               |       |       |   \n";
    cout << "03.   |     |     |F    |     |     |               |       |       |   \n";
    cout << "04.   |     |     |     |0    |     |               |       |       |   \n";
    cout << "05.   |     |     |     |     |T    |               |       |       |   \n";
    cout << "06.   |     |     |     |     |     |F              |       |       |   \n";
    cout << "07.   |     |     |T    |     |     |               |       |       |   \n";
    cout << "08.   |     |     |     |1    |     |               |       |       |   \n";
    cout << "09.   |     |     |     |     |     |               |       |TRUE   |   \n";
 
    return 0;
}