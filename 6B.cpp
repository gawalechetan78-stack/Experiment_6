

#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter number of rows: ";
    cin >> num;

    for (int i = num; i >= 0; i--)
    {
        for (int j = 0; j <= num - i - 1; j++)
        {
            cout << " ";
        }

        for (int k = 0; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}

/* Output

Enter number of rows: 5
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *

Enter number of rows: 3
 * * * *
  * * *
   * *
    *

*/
