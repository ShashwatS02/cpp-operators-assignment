#include <iostream>
using namespace std;

int main() {

    int row, col;
    int n;
    cout << "Input the number: ";
    cin >> n;

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n-row; col++) {
    //         cout << "  ";
    //     }
    //     for (col = 1; col <= row; col ++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n-row; col++) {
    //         cout << "  ";
    //     }
    //     for (col = 1; col <= row; col ++) {
    //         cout << row << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n-row; col++) {
    //         cout << "  ";
    //     }
    //     for (col = 1; col <= row; col ++) {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n-row; col++) {
    //         cout << "  ";
    //     }
    //     for (char name = 'A'; name <= 'A'+row - 1; name++) {
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    //OR

    // for (row = 1; row <= n; row++) {
    //     for (col = 1; col <= n-row; col++) {
    //         cout << "  ";
    //     }
    //     for (col = 1; col <= row; col ++) {
    //         char name = 'A' + col - 1;
    //         cout << name << " ";
    //     }
    //     cout << endl;
    // }

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n-row; col++) {
            cout << "  ";
        }
        for (col = row; col >= 1; col --) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}