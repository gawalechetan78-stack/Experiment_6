

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 2; ++i)
    {
        cout << "Outer " << i << endl;

        for (int j = 1; j <= 3; ++j)
        {
            cout << "Inner " << j << endl;
        }
    }

    return 0;
}

/* Output

Outer 1
Inner 1
Inner 2
Inner 3
Outer 2
Inner 1
Inner 2
Inner 3

*/
