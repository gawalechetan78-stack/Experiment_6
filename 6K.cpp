


#include <iostream>

using namespace std;

int main() {
    int n = 5;
    int num = 1;

    for(int i = 0; i <= n; i++) {
        for(int k = 0; k <= i; k++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

/* Output

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21

*/
