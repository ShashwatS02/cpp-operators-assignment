#include <iostream>
using namespace std;

int main() {

    // for (int i = 1; i <= 10; i++) {
    //     if (i==4) {
    //         break;
    //     }
    //     cout << i << " ";
    // }

    for (int i =1; i <= 100; i++) {
        if (i==4) {
            continue;
        }
        cout << i << " ";
    }

    return 0;
}