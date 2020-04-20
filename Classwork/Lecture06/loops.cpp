#include <iostream>
#include <string>

using namespace std;

void CountToButSkip(int n, int a, int b)
{
    for (int i =1; i <=n; i+=1)
    {
        if (i == a || i ==b)
        {
            continue;
        }
    cout << i << "\n";
}    
}


int main()
{
    cout<<"Hello World\n\n";
    
    CountToButSkip(150,57,28);

    return 0;
}
