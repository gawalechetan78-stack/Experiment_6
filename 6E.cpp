
#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    string stored_pass = "User@12345";
    int flag = 0;

    cout << "Enter the password: ";
    cin >> password;

    while(flag != 1) {
        for(int i = 0; i < password.size(); i++) {
            if(password[i] != stored_pass[i]) {
                flag = 1;
            }
        }
        break;
    }

    if(flag == 1) {
        cout << "The entered password is NOT correct" << endl;
    } else {
        cout << "The entered password is correct" << endl;
    }

    return 0;
}

/* Output

Enter the password: User@12345
The entered password is correct

Enter the password: user@12345
The entered password is NOT correct

*/
