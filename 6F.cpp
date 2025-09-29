


#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    while(num > 0) {
        cout << num % 10;
        num = num / 10;
    }

    cout << endl;

    return 0;
}

/* Output

Enter a number: 12345
54321

*/
